#include <unistd.h>
/**
 * _putchar - prints character
 *
 * @c: character to be printed
 *
 * Return: char c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
