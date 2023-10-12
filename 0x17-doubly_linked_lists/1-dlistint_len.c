#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked list
 * @h: head of the list to be treated
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
return (i);
}
