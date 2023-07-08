#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: the hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size;
	unsigned long int index;
	unsigned long int count = 0;
	hash_node_t *temp = NULL;
	hash_node_t **array = NULL;

	if (!ht)
		return;

	size = ht->size;
	array = ht->array;
	printf("%c", '{');

	for (index = 0; index < size; index++)
	{
		temp = array[index];

		while (temp && temp->value)
		{
			if (count != 0)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			count++;
			temp = temp->next;
		}
	}
	printf("}\n");
}
