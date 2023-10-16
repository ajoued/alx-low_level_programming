#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list to be treated
 * @idx: index of the node position
 * @n: data to be placed in the node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = NULL;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		temp = add_dnodeint(h, n);
		return (temp);
	}

	temp = malloc(sizeof(dlistint_t));
	temp->n = n;
	for (i = 0; i < idx; i++)
	{
		if 
	}
}
