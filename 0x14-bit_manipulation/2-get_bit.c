#include "main.h"

/**
 * get_bit - returns the value of bit at
 * given index
 * @n: the number
 * @index: the index
 *
 * Return: bit at index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int temp;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	temp = ((n >> index) & 1);

	return (temp);
}
