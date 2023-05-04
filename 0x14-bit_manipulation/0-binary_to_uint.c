#include "main.h"

/**
 * binary_to_uint - converts binary string to uns. int
 * @b: the binary string
 *
 * Return: the converted num, 0 if string is
 * not binary and 1 if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	int power, len;
	unsigned int dec = 0;

	if (b == NULL)
		return (1);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (len--, power = 1; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			dec += power;
	}

	return (dec);
}
