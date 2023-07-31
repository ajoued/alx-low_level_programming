#include "lists.h"

/**
 * print_listint - prints all the elements of a listint
 * @h: head of the list to be treated
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	listint_t *ptr;

	ptr = (listint_t *)h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		i++;
		ptr = ptr->next;
	}
return (i);
}
