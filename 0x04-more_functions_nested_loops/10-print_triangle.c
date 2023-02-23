#include "main.h"
/**
 * print_triangle - print triangle
 *
 * @size: size of triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int i, ii;

	if (size <= 0)
		_putchar('\n');

	i = 1;
	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
}
