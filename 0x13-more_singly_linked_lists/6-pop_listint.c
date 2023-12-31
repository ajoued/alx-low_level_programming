#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: head of the linked list to be treated
 * Return: the data of the deleted head node
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp = NULL;

	if (*head != NULL)
	{
		n = (*head)->n;
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	return (n);
}
