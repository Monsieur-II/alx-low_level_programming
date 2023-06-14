#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	unsigned long int len = 0, ctrl_len;
	listint_t *temp = head;
	listint_t *control = NULL;

	if (!head)
		return (NULL);

	while (temp)
	{
		len++;
		temp = temp->next;
		control = head;
		ctrl_len = 0;

		while (ctrl_len < len)
		{
			if (temp == control)
				return (temp);
			control = control->next;
			ctrl_len++;
		}
	}
	return (NULL);
}
