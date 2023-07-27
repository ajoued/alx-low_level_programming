#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: string to be copied as value
 * Return: the address of of the new element
 * NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));
	temp->next = *head;
	if (str != NULL)
	{
		temp->str = strdup(str);
		len = strlen(str);
		temp->len = len;
	}
	*head = temp;
return (*head);
}
