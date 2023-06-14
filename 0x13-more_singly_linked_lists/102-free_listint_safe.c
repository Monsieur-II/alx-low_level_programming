#include "lists.h"

/**
 * get_len_safe - gets length of a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: no. of elements in list
 */
size_t get_len_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp_n = head;
	while (tmp_n)
	{
		counter++;
		tmp_n = tmp_n->next;
		l_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (tmp_n == l_n)
				return (counter);
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len, i;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	len = get_len_safe(*h);
	i = 0;
	while (i < len)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		i++;
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
