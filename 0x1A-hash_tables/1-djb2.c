#include "hash_tables.h"

/**
 * hash_djb2 - hashes a key string
 * @str: the key string
 *
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;/* (hash * 33) + hash + c */

	return (hash);
}
