#include <stdio.h>

/**
 * main - prints sum of even-valued terms of a
 * fibonacci sequence less than 4,000,000
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int sum, a, b, fibo;

	a = 1;
	b = 2;

	sum = 2;
	fibo = b + a;

	while (fibo <= 4000000)
	{
		if (!(fibo % 2))
			sum += fibo;

		a = b;
		b = fibo;
		fibo = b + a;
	}

	printf("%ld\n", sum);

	return (0);
}
