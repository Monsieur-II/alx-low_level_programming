#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table to delete
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp = NULL;
	hash_node_t *current = NULL;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		current = (ht->array)[index];

		while (current)
		{
			temp = current->next;
			if (current->value != NULL)
				free(current->value);
			free(current);
			current = temp;
		}
	}

	free(ht->array);
	free(ht);
}
