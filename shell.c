#include "main.h"
/**
 * main - simple shell that runs commands with their full path, without
 * arguments
 *
 * Return (0);
 */
int main(void)
{
    char *line_read = NULL, *token, *argv[3];
    int i, status;
    size_t n;
    ssize_t nread;
    pid_t pid;

    while (1)
    {
        printf("#cisfun$ ");
        n = 0;

        if ((nread = _getline(&line_read, &n, stdin)) == -1)
            exit(EXIT_FAILURE);

        token = strtok(line_read, "\n ");
        i = 0;

        while (token)
        {
            argv[i++] = token;
            token = strtok(NULL, "\n ");
        }
        argv[i] = NULL;
	if (!*argv)
	{
		free(line_read);
		line_read = NULL;
		continue;
	}

        pid = fork();
        if (pid == -1)
        {
            perror("Error");
            exit(EXIT_FAILURE);
        }
        else if (pid == 0)
        {
            if ((execve(argv[0], argv, NULL)) == -1)
            {
                if (errno == ENOENT)
			fprintf(stderr,"sh: 1: %s: not found\n", *argv);
		exit(-1);
            }
        }
        else
        {
            wait(&status);
        }
        if (line_read != NULL)
	{
		free(line_read);
		line_read = NULL;
	}
    }
    return (0);
}
