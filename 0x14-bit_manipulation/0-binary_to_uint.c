#include "main.h"

/**
 * _strlen - prints length of string pointed by *s
 * @s: pointer to string
 *
 * Return: 0;
 */
int _strlen(const char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}

/**
 * binary_to_uint - converts binary string to an unsigned int
 * @b:  pointer to the string
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int len = _strlen(b);
	unsigned int decimal = 0;
	int i, j, digit;

	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		if ((b[i] != '0' && b[i] != '1') || (b == NULL))
			return (0);
		digit = b[i] - '0';
		decimal = decimal + (digit << j);
	}

	return (decimal);
}

