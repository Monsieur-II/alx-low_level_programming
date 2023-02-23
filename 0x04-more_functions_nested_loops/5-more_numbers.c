#include "main.h"
/**
 * more_numbers - entry
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int n, c;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				c = n % 10;
				_putchar('1');
			}
			_putchar(c + '0');
		}
		_putchar('\n');
		i++;
	}
}
