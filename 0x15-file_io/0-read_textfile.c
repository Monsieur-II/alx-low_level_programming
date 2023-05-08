#include "main.h"

/**
 * read_textfile - reads text file and prints to 
 * standard output
 * @filename: name of file
 * @letters: no of letters to read
 *
 * Return: no. of letters read and printed,
 * 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return(0);

	fd = open(filename, O_RDONLY);
	
	r = read(fd, buffer, letters);

	w = write(STDOUT_FILENO, buffer, r);

	if (fd == -1 || r == -1 || w == -1 || r != w)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (w);
}
