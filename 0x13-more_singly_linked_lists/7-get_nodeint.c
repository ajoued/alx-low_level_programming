#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a list
 * @head: head of the list to be treated
 * @index: the node number
 * Return: a pointer to the node address
 * NULL if the node wasn't found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = NULL;

	if (!head)
		return (NULL);
	ptr = head;
	while (i < index)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
