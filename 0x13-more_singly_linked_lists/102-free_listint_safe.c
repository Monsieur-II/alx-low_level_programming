#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0, ctrl_len;
	listint_t *current, *temp, *control;

	if (!h || !*h)
		return (len);
	current = *h;
	while (current)
	{
		len++;
		temp = current->next;
		free(current);
		current = temp;

		control = *h;
		ctrl_len = 0;
		while (ctrl_len < len)
		{
			if (current == control)
			{
				*h = NULL;
				return (len);
			}
			control = control->next;
			ctrl_len++;
		}
	}
	*h = NULL;
	return (len);
}

/*
 * This is a revised implementation. Most alx solutions to this task,
 * used pointer arithmetic to check if a node points to a previous node.
 * This gives accurate results only if all new nodes were added at the
 * beginning or at the end of the linked list.
 * What if a first node was added, then the second node was pushed at the end,
 * then all other nodes were pushed at the start? second node that was added
 * is now the last and what if it is made to point to say the 1st node?
 * Will pointer arithmetic work for a free safe?
 */
