#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @s: the string to be treated
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, length;

	length = strlen(s);
	for (i = length - 1; i <= 0; i--)
	{
		_putchar(s[i]);
	}
}
