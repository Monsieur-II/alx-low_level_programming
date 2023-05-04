#include "main.h"

/**
 * set_bit - sets value of bit to 1 at given index
 * @n: the pointer to the number
 * @index: the index
 *
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask <<= index;

	*n = (*n | mask);

	return (1);
}
