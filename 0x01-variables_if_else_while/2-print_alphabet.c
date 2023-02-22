#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: prints alphabet
 *
 * Return: 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	putchar('\n');
	return (0);
}
