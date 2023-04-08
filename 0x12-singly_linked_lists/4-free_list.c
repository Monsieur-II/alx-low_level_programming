#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		if (head->str)
			free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}
