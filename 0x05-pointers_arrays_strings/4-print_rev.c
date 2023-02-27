#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string pointer
 *
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;
	int i;

	for (; *s++;)
		a++;

	i = a;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
