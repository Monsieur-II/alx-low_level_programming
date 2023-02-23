#include <stdio.h>
/**
 * main - largest prime number
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int i;

	for (i = 3; i < 782849; i += 2)
	{
		while ((num % i == 0) && (num != i))
			num = num / i;
	}
	printf("%lu\n", num);
	return (0);
}
