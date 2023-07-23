#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, len;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);
	len = strlen(format);
	while (i < len - 1)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, (char)va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", sep, (float)va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					printf("%s(nil)", sep);
					break;
				}
				printf("%s%s", sep, str);
				break;
			default:
				break;
		}
		sep = ", ";
		i++;
	}

	va_end(list);
	putchar('\n');
}
