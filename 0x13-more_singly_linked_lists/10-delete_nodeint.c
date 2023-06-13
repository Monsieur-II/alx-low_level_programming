#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = NULL, *next = NULL;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}

	current = *head;
	next = current->next;

	while (i < index && next)
	{
		if (i == index - 1)
		{
			next = next->next;
			free(current->next);
			current->next = next;
			return (1);
		}
		else
		{
			next = next->next;
			current = current->next;
		}
		i++;
	}

	return (-1);
}
