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
	hash_node_t *node = NULL;
	unsigned long int index;

	if (!key || !ht || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (!node->value)
				return (0);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup((char *)key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node);
		free(node->key);
		return (0);
	}
	node->next = (ht->array)[index];
	(ht->array)[index] = node;
	return (1);
}
