#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the list to be treated
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ptr, *temp;

	ptr = head;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp->str);
		free(temp);
	}
	free(ptr);
}
