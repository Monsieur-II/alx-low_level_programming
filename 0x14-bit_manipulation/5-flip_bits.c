#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip
 * to get from n to m
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits needed to flip to
 * get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	unsigned int count = 0;

	temp = n ^ m;

	while (temp > 0)
	{
		count += (temp & 1);
		temp >>= 1;
	}

	return (count);
}
