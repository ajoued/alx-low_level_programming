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
	char *str;
	va_list list;

	va_start(list, format);
	len = strlen(format);
	while (i < len - 1)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", (char)va_arg(list, int));
				break;
			case 'i':
				printf("%d, ", va_arg(list, int));
				break;
			case 'f':
				printf("%f, ", (float)va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					printf("(nil), ");
					break;
				}
				printf("%s, ", str);
				break;
			default:
				break;
		}
		i++;
	}
	switch (format[i])
                {
                        case 'c':
                                printf("%c", (char)va_arg(list, int));
                                break;
                        case 'i':
                                printf("%d", va_arg(list, int));
                                break;
                        case 'f':
                                printf("%f", (float)va_arg(list, double));
                                break;
                        case 's':
                                str = va_arg(list, char *);
                                if (str == NULL)
                                {
                                        printf("(nil)");
                                        break;
                                }
                                printf("%s", str);
                                break;
                        default:
                                break;
                }

	va_end(list);
	putchar('\n');
}
