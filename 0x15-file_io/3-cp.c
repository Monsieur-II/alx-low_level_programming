#include "main.h"

/**
 * close_fd - close file desc.
 * @fd: file descriptor
 *
 * Return: nothing
 */

void close_fd(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	}

	exit(100);
}

/**
 * arg_count - prints error message
 *
 * Return: nothing
 */

void arg_count(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd1, fd2;
	ssize_t r, w;
	char *buffer;

	if (argc != 3)
		arg_count();

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);


	do {
		r = read(fd1, buffer, 1024);

		if (fd1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(fd2, buffer, r);
		if (fd2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		fd2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_fd(fd1);
	close_fd(fd2);
	return (0);
}
