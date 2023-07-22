#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of integers t be treated
 * Return: the rresult of the addition
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int i;
	int sum = 0;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
