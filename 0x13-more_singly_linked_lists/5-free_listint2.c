#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of the list to be treated
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head == NULL)
		exit(0);
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
