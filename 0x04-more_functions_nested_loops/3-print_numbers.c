#include "main.h"
/**
 * print_numbers - entry
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
