#include "main.h"
/**
 * _isupper - entry point
 *
 * Description: checks if a character is uppercase
 *
 * @c: the integer value it receives
 *
 * Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
