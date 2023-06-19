#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: the string
 *
 * Return: converted integer or zero if none
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s)
	{
		if (*s == '-')
			sign = sign * -1;

		else if (*s >= '0' && *s <= '9')
			break;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		num = (num * 10) + (*s - '0');
		s++;
	}

	return (num * sign);
}
