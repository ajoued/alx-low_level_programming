#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of the list to be treated
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp = NULL;

	ptr = *head;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	*head = NULL;
}
