#include "main.h"
/**
 * print_times_table - prints times table up to param
 *
 * @n: the number treated
 *
 * Return: number matrix
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = j * i;
			if (j == 0)
				_putchar(k + 48);
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + 48);
			}
			else if (k >= 10 && k < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 100) + 48);
				_putchar(((k / 10) % 10) + 48);
				_putchar((k % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
