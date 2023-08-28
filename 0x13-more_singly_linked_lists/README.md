readme file
my_listint_t *reverse_listint(listint_t \*\*head)
{
listint_t *prev = NULL;
listint_t \*next = NULL;

    if (!head || !*head)
    	return (NULL);

    next = (*head)->next;

    while (next)
    {
    	(*head)->next = prev;
    	prev = *head;
    	*head = next;
    	next = next->next;
    	(*head)->next = prev;
    }

    return (*head);

}
