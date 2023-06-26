#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be treated
 * Return: nothing
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int i;

	if (length % 2 == 0)
	{
		i = length / 2;
		while (i <= length - 1)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (length - 1) / 2 - 1;
		while (i <= length - 1)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
