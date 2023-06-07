#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int a, b, fibo;
	int i;

	a = 1;
	b = 2;

	printf("%ld, %ld, ", a, b);

	for (i = 0; i < 48; i++)
	{
		fibo = b + a;
		printf("%ld", fibo);

		if (i != 47)
			printf(", ");
		else
			printf("\n");

		a = b;
		b = fibo;
	}
	return (0);
}
