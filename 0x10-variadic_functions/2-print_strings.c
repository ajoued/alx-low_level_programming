#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings to be treated
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	int i;

	va_start(strings, n);

	if (n != 0)
	{
		for (i = 0; i < (int)n - 1; i++)
		{
			if (separator != NULL)
				printf("%s%s", va_arg(strings, char *), separator);
			else
				printf("%s", va_arg(strings, char *));
		}
		printf("%s", va_arg(strings, char *));
	}

	va_end(strings);

	putchar('\n');
}
