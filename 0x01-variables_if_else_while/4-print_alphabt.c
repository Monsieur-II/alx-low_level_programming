#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point of the program
 *
 * Description: prints alphabet withour 'q' and 'e'
 *
 * Return: 0
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'q' && alp != 'e')
			putchar(alp);
	}
	putchar('\n');
	return (0);
}
