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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
