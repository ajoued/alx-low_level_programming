#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list to be freed
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
