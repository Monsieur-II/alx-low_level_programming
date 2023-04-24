#include "main.h"

/**
 * _getline - reads a line from a stream and stores it in a dynamically allocated buffer.
 * @lineptr: address of the buffer
 * @n: pointer to the size of the buffer
 * @stream: the stream to read from
 *
 * Return: the number of bytes read on success, -1 on error
 */

ssize_t _getline(char **lineptr, size_t *n, int fd)
{
    static size_t buff_size = INITIAL_BUFFER_SIZE;
    size_t n_read = 0, n_count = 0; /* n_count is the no. of bytes read anytime read() is called*/
    char *buf = *lineptr;

    if (buf == NULL || *n < buff_size)
    {
        buff_size = INITIAL_BUFFER_SIZE;

        if ((buf = realloc(buf, buff_size)) == NULL)
            return (-1); /* realloc buffer_size to buf, if it fails, return -1 */

        *n = buff_size; /* update *n */
    }

    else
        buff_size = *n;

    while ((n_read = read(fd, buf, (buff_size - 1))) > 0) // no error
    {
        if (buf[n_read - 1] == '\n')
            break; /* break upon newline */

        if ((buff_size - 1) > n_read)
        {
            break; /* if buff_size - 1 > n_read it means the whole file has been read */
        }
        else
        {
            *n *= 2;
            buff_size = *n;
            if ((buf = realloc(buf, buff_size)) == NULL)
                return (-1);
        }
    }

    if (n_read == 0 || n_read == -1)
        return (-1);

    buf[n_read] = '\0'; /* terminate buffer */
    return (n_read);
}