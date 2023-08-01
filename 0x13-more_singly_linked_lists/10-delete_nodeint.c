#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index in a list
 * @head: head of the list to be treated
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = NULL, *ptr = NULL;

	if (index == 0)
	{
		temp = *head;
		if (temp == NULL)
			return (-1);
		*head = temp->next;
		free(temp);
		temp = NULL;
		head = NULL;
		return (1);
	}
	ptr = *head;
	while (i < index - 1)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
		i++;
	}
	temp = ptr->next;
	if (temp == NULL)
		return (-1);
	ptr->next = temp->next;
	free(temp);
	temp = NULL;
	ptr = NULL;
	return (1);
}
