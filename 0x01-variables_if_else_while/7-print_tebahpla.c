#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: prints alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char pla;

	for (pla = 'z'; pla >= 'a'; pla--)
		putchar(pla);
	putchar('\n');
	return (0);
}
