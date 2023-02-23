#include "main.h"
/**
 * print_diagonal - entry
 *
 * @n: number of lines
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, ii;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (i < n && n > 0)
		{
			ii = 0;
			while (ii < i)
			{
				_putchar(' ');
				ii++;
			}
		_putchar('\\');
		_putchar('\n');
		i++;
		}
	}
}
