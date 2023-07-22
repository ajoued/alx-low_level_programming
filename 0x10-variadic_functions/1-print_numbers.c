#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers to be treated
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	int i;

	va_start(numbers, n);

	for (i = 0; i < (int)n - 1; i++)
	{
		printf("%d%s", va_arg(numbers, int), separator);
	}
	printf("%d\n", va_arg(numbers, int));

	va_end(numbers);
}
