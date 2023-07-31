#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: head of the list to be treated
 * @n: value of int of the new node
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL, *ptr;

	temp = malloc(sizeof(listint_t));
	if (temp != NULL)
	{
		temp->n = n;
		temp->next = NULL;
		if (*head == NULL)
		{
			*head = temp;
			return (temp);
		}
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
		return (temp);
	}
return (temp);
}
