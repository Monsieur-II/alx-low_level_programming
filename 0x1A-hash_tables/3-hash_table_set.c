#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: the hash table
 * @key: the key string
 * @value: the value of element
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *dup = NULL;
	hash_node_t *node = NULL;
	unsigned long int index;

	if (!key || !ht)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = (char *)key;
	dup = strdup(value);
	if (!dup)
		return (0);
	node->value = dup;

	node->next = (ht->array)[index];
	(ht->array)[index] = node;

	return (1);
}
