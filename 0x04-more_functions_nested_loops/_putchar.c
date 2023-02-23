#include <unistd.h>
/**
 * main -entry point
 *
 *
 * Return: char c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
