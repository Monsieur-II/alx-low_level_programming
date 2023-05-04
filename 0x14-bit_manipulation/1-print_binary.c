#include "main.h"

/**
 * print_binary - prints binary of a number
 * @n: the number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp, shifts;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			_putchar(49);

		else
			_putchar(48);
	}
}
