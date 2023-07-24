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
	if (format[i] != '\0' || format != NULL)
	{
		while (i < len)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, (char)va_arg(list, int));
					i++;
					sep = ", ";
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					i++;
					sep = ", ";
					break;
				case 'f':
					printf("%s%f", sep, (float)va_arg(list, double));
					i++;
					sep = ", ";
					break;
				case 's':
					str = va_arg(list, char *);
					if (str == NULL)
						str = "(nil)";	
					printf("%s%s", sep, str);
					i++;
					sep = ", ";
					break;
				default:
					i++;
					break;
			}
		}
	}

	va_end(list);
	putchar('\n');
}
