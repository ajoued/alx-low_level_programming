#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string to be treated
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;
	int length = strlen(str);

	while (i < length)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
