#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: head of the list to be treated
 * @n: value of n in the new node
 * Return: pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (temp != NULL)
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
	}
return (temp);
}
