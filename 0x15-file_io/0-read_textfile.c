#include "main.h"
/*
 * ssize_t read_textfile - reads text file and prints to stdout
 * @filename: name of file
 * @letters: number of bytes
 *
 * Return: number of bytes read and written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buffer;

	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return(0);
	}
	w = write(fd, buffer, STDOUT_FILENO);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close (fd);
	return (w);
