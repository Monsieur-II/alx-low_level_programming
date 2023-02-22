#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: prints alphabets
 *
 * Return: 0
 */
int main(void)
{
	char alphs;

	for (alphs = 'a'; alphs <= 'z'; alphs++)
		putchar(alphs);
	for (alphs = 'A'; alphs <= 'Z'; alphs++)
		putchar(alphs);
	putchar('\n');
	return (0);
}
