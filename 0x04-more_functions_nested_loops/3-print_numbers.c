#include "main.h"

/**
 * prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int i = 0;
	char *num = "0123456789";

	while (num[i] != '\0')
	{
		_putchar(num[i]);
		i++;
	}
	_putchar('\n');
}	
