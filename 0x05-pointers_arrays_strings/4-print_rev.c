#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string pointer
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = _strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
