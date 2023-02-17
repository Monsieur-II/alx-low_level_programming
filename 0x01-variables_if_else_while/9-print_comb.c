#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints out combinations of single digits
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
