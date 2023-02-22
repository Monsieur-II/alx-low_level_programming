#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digi;

	last_digi = n % 10;
	if (last_digi < 0)
	{
		last_digi *= -1;
		_putchar(last_digi + 48);
		return (last_digi);
	}
	else
	{
		_putchar(last_digi + 48);
		return (last_digi);
	}
}
