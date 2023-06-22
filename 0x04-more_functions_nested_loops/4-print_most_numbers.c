#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * exclude 2 and 4
 * followed by a new line.
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i = 0;
	char *num = "01356789";

	while (num[i] != '\0')
	{
		_putchar(num[i]);
		i++;
	}
	_putchar('\n');
}
