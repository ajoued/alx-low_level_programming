#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: list head node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	list_t *ptr;

	ptr = (list_t *)h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			ptr->len = 0;
			ptr->str = "(nil)";
		}
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		i++;
	}
return (i);
}
