#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @str: string to be copied as data
 * Return: the address of the new element
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *ptr = NULL;
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));
	if (temp != NULL)
	{
		if (str != NULL)
		{
			temp->str = strdup(str);
			len = strlen(str);
			temp->len = len;
		}
		temp->next = NULL;

		if (*head == NULL)
		{
			*head = temp;
			return (*head);
		}

		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}

return (ptr);
}
