#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with key
 * @ht: hash table
 * @key: the key
 *
 * Return: value of key, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head = NULL;

	if (!key || !ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	head = (ht->array)[index];

	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);

		head = head->next;
	}

	return (NULL);
}
