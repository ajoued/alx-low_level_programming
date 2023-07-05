#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be treated
 * Return: the fact of n
 */

int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	fact = n * factorial(n - 1);
	return (fact);
}
