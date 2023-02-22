#include "main.h"
/**
 * times_table - prints the 9 times table,
 * starting with 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int n, j, cur_num;

	n = j = 0;
	for (n = 0; n <= 9; n++)
	{
		for (j = 0; j <= 9; j++)
		{
			cur_num = n * j;
			if (j == 0)
				_putchar(cur_num + 48);
			else if (cur_num <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(cur_num + 48);
			}
			else if (cur_num > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((cur_num / 10) + 48);
				_putchar((cur_num % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
