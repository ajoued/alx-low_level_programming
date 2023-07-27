#include "lists.h"

/**
 * list_len - count the number of elements
 * @h: head of the list to be treated
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	list_t *ptr;

	ptr = (list_t *)h;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
return (i);
}
