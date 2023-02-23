#include "main.h"
/**
 * print_square - entry
 *
 * @size: size of square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int i, ii;

	if (size <= 0)
		_putchar('\n');
	else
	{
		i = 0;

		while (i < size && size > 0)
		{
			ii = 0;
			while (ii < size)
			{
				_putchar('#');
				ii++;
			}
			_putchar('\n');
			i++;
		}
	}
}
