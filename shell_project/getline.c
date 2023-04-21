#include "main.h"

/**
 * _getline - reads a line from a stream stores it in a dynamically allocated buffer.
 * @lineptr: the address of the buffer
 * @n: address pointing to the size of the buffer
 * @stream: the stream to read from
 *
 * Return: the number of bytes read from stream, -1 on error
 */

#define INITIAL_BUFFER_SIZE 1024
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
    static size_t buffer_size = INITIAL_BUFFER_SIZE;
    ssize_t num_read = 0;
    char *buf = *lineptr;

    if (buf = NULL || *n < buffer_size)
    {
        buffer_size = INITIAL_BUFFER_SIZE; // resetting buffersize's value regardless of previous call
        if ((buf = realloc(buf, buffer_size)) == NULL)
            return (-1);
    }

    *lineptr = buf;
    *n = buffer_size; // update buffer and its after realloc

    while ((num_read = read(stream, buf, buffer_size - 1)) > 0) // num_read > means EOF not reached so we loop
    {
        if (buf[num_read - 1] == \n) // break upon newline and terminate buffer with '\0'
        {
            buf[num_read] = '\0';
            *lineptr = buf;
            *n = buffer_size;
            break;
        }

        buffer_size *= 2;
        if ((buf = realloc(buf, buffer_size)) == NULL)
            return (-1);
    }

    if (num_read == -1)
        return (-1);

    else if (num_read == 0) // upon EOF, update buffer and its size after realloc in loop, then terminate it
    {
        *lineptr = buf;
        *n = buffer_size;
        lineptr[num_read] = '\0';
    }
}
