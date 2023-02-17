#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all numbers in base 16
 *
 * Return: 0
 */
int main(void)
{
	char n;
	char ch;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
