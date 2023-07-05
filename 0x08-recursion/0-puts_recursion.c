#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be treated
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		s = s + 1;
		_puts_recursion(s);
	}
}
