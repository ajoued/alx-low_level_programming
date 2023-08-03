#include "lists.h"

/**
 * detect_loop - finds out if there is a loop in a list
 * @h: head of the list to be treated
 * @slow: the slow pointer
 * @fast: the fast pointer
 * Return: 1 if there is a loop detected
 * 0 otherwise
 */
int detect_loop(listint_t *h, listint_t **slow, listint_t **fast)
{
	if (h == NULL || h->next == NULL)
		return (-1);
	*fast = h;
	*slow = h;
	while (*slow != NULL && *fast != NULL && (*fast)->next != NULL)
	{
		*slow = (*slow)->next;
		*fast = (*fast)->next->next;
		if (*slow == *fast)
			return (1);
	}
	return (0);
}

/**
 * break_loop - breaks the loop in a list if detected
 * @h: head of the list to be treated
 * @slow: the slow pointer
 * @fast: the fast pointer
 * Return: a pointer to the looped node
 */
listint_t *break_loop(listint_t *h, listint_t *slow, listint_t *fast)
{
	if (slow == NULL || fast == NULL)
		return (NULL);
	slow = h;
	while (slow->next != fast->next)
	{
		slow = slow->next;
		fast = fast->next;
	}
	fast->next = NULL;
return (fast);
}

/**
 * print_listint_safe - prints all the elements of a listint
 * @head: head of the list to be treated
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	listint_t *ptr1 = NULL, *ptr2 = NULL;


	if (detect_loop((listint_t *)head, &ptr1, &ptr2) == 1)
		ptr2 = break_loop((listint_t *)head, ptr1, ptr2);
	ptr1 = (listint_t *)head;
	while (ptr1 != NULL)
	{
		printf("[%p] %d\n", (void *)ptr1, ptr1->n);
		i++;
		ptr1 = ptr1->next;
	}
	ptr1 = ptr2->next;

return (i);
}
