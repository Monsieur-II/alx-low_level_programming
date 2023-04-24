#include "main.h"

extern char **environ;
/**
 * main - simple shell that runs commands with their full path, without
 * arguments
 *
 * Return (0);
 */
int main(int argc, char **argv, char **env)
{
    char *line_read = NULL, *token, *path, *args[64];
    char *path_env, command_path[MAX_COMMAND_LEN];
    int i, status;
    size_t n = 64;
    pid_t pid;

    strcpy(path_env, getenv("PATH"));

    while (1)
    {
        write(STDOUT_FILENO, "$ ", 2);

        line_read = malloc(n);
        if (line_read == NULL)
            exit(EXIT_FAILURE);

        if (_getline(&line_read, &n, STDIN_FILENO) == -1)
            exit(EXIT_FAILURE);

        token = strtok(line_read, "\n "); // newline and space are the delims
        i = 0;

        while (token && i < 64)
        {
            args[i++] = token;
            token = strtok(NULL, "\n ");
        }
        args[i] = NULL;
        if (!*args)
        {
            free(line_read);
            line_read = NULL;
            continue;
        }

        path = strtok(path_env, ":");

        while (path)
        {
            if (strchr(args[0], '/') != NULL)
                strcpy(command_path, args[0]);

            else
            {
                /* Write full path of command into one string and check if it exists (combination of char *path + args[0]). */
                strcpy(command_path, path);
                strcat(command_path, args[0]);
            }

            if (access(command_path, X_OK) == 0)
            {

                pid = fork();
                if (pid == -1)
                {
                    perror("Error");
                    exit(EXIT_FAILURE);
                }
                else if (pid == 0)
                {
                    if ((execve(command_path, args, NULL)) == -1)
                    {
                        perror("Error");
                        exit(EXIT_FAILURE);
                    }
                }
                else
                {
                    wait(&status);
                    if (line_read != NULL)
                    {
                        free(line_read);
                        line_read = NULL;
                    }
                    break;
                }
            }

            path = strtok(NULL, ":"); /* Loop to next directory in path */
        }
        /*At this point path is NULL*/
        if (line_read != NULL)
        {
            free(line_read);
            line_read = NULL;
        }
    }
    return (0);
}
