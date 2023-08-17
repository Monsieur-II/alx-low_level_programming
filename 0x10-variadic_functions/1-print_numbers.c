#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list list;

	va_start(list, n);

	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if ((i != n - 1) && *seperator)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(list);
}
