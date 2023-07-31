#include "lists.h"

/**
 * listint_len - counts the number of elements in a list
 * @h: head of the list to be treated
 * Return: the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	listint_t *ptr;

	ptr = (listint_t *)h;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
return (i);
}
