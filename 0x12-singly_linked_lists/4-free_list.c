#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the list to be treated
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ptr, *temp;

	if (head != NULL)
	{
		ptr = head;

		while (ptr != NULL)
		{
			temp = ptr->next;
			free(ptr->str);
			free(ptr);
			ptr = temp;
		}
	}
}
