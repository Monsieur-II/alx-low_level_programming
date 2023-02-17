#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: prints out single digits
 *
 * Return: 0
 */
int main(void)
{
	int dec;

	for (dec = 0; dec < 10; dec++)
		putchar(dec + '0');
	putchar('\n');
	return (0);
}
