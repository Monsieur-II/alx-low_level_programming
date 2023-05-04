#include "main.h"
#include <stdio.h>

int main(void)
{
	unsigned int dec;

	dec = binary_to_uint("101");
	printf("%u\n", dec);

	dec = binary_to_uint("1100010");
	printf("%u\n", dec);

	dec = binary_to_uint("0000000110010010");
	printf("%u\n", dec);

	dec = binary_to_uint("110F0010");
	printf("%u\n", dec);

	dec = binary_to_uint(NULL);
	printf("%u\n", dec);

	return (0);
}
