#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: head of the list to be treated
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = NULL;

	if (!head)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
return (sum);
}
