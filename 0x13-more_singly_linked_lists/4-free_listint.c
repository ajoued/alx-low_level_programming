#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of the list to be treated
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
