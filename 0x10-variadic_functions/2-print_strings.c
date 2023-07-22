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
	char *str;

	va_start(strings, n);

	if (n != 0)
	{
		for (i = 0; i < (int)n - 1; i++)
		{
			str = va_arg(strings, char *);
			if (str != NULL)
			{
				if (separator != NULL)
					printf("%s%s", str, separator);
				else
					printf("%s", str);
			}
			else
				if (separator != NULL)
					printf("(nil)%s", separator);
				else
					printf("(nil)");
		}
		str = va_arg(strings, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
	}

	va_end(strings);

	putchar('\n');
}
