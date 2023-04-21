#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
    ssize_t pos = 0;
    char c;

    // get characters
    while ((c = getc(stream)) != EOF)
    {
        // if buffersize is not enough increase it. *n is the size of the buffer that lineptr points to
        if (pos + 1 >= *n)
        {
            *n += 25;

            *lineptr = realloc(*lineptr, *n); // if lineptr is null realloc just allocates the new buffersize to it
            if (*lineptr == NULL)
            {
                perror("Unable to allocate memory");
                exit(EXIT_FAILURE);
            }
        }
        (*lineptr)[pos++] = c;
        if (c == '\n')
            break; // break upon newline
    }

    // If no character was read, return -1
    if (pos == 0)
        return (-1);

    (*lineptr)[pos] = '\0'; // terminating the string

    return (pos - 1);
}

/*int main(void)
{
    char *lineptr = NULL;
    size_t n = 0;
    ssize_t nread;*/

    /*lineptr = malloc(n);
    if (lineptr == NULL)
    {
        fprintf(stderr, "Unable to allocate memory\n");
        exit(EXIT_FAILURE);
    }*/

    /*nread = _getline(&lineptr, &n, stdin);
    if (nread != -1)
        printf("%s\n", lineptr);

    free(lineptr);

    return (0);
}*/
