#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: prints single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int dec;

	for (dec = 0; dec <= 9; dec++)
		printf("%d", dec);
	putchar('\n');
	return (0);
}
