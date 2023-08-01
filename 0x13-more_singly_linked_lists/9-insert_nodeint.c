#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list to be treated
 * @idx: index of the new node position
 * @n: n value in the new node
 * Return: the address of the new node
 * NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL, *temp = NULL;
	unsigned int i = 0;

	temp = malloc(sizeof(listint_t));
	if (temp != NULL)
	{
		temp->n = n;
		if (idx == 0)
		{
			temp->next = (*head);
			*head = temp;
			return (temp);
		}
		ptr = *head;
		while (i < idx - 1)
		{
			if (ptr->next == NULL)
				return (NULL);
			ptr = ptr->next;
			i++;
		}
		temp->next = ptr->next;
		ptr->next = temp;
	}
return (temp);
}
