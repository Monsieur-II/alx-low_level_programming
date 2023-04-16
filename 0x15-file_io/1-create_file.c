#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of file
 * @text_content: content to write into file
 *
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t w, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[i] != '\0')
	{
		len++;
		i++;
	}

	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
