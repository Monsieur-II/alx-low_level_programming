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
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}


/* This is a longer method but just wanted to play with recursion*/

/**
 * recursive_free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void recursive_free_list(list_t *head)
{
	while (head)
	{
		/*Base case*/
		if (head->next == NULL)
		{
			free(head->str);
			free(head);
		}

		else
		{
			free_list(head->next);
			free(head->str);
			free(head);
		}
	}
}
