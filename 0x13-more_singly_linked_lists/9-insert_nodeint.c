#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: address to pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *temp = NULL;
	unsigned int i;

	if (head == NULL || (*head == NULL && idx != 0))
		return (NULL);

	temp = *head;
	i = 0;

	while (i < idx)
	{
		temp = temp->next;

		if (temp == NULL)
		{
			if (i == idx - 1)
			{
				i++;
				continue;
			}
			else
				return (NULL);
		}

		i++;
	}

	new_node = add_nodeint(&temp, n);

	return (new_node);
}
