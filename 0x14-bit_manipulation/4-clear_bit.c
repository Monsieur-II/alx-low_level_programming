#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: the address of number
 * @index: the number
 *
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = ~(mask << index);

	*n = (*n & mask);

	return (1);
}
