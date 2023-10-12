#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a list
 * @head: head of the list to be treated
 * Return: the sum of all the data 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
return (sum);
}
