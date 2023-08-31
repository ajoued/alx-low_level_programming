#include "main.h"

/**
 * power_of - calculates the power of a number
 * @n: the number to be treated
 * @p: the power of the number
 * Return: the result
 */
int power_of(unsigned int n, unsigned int p)
{
	int result = 1;

	if (p == 0)
		return (1);
	while (p > 0)
	{
		result = result * n;
		p--;
	}
	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number to be treated
 * Return: converted number or 0 if it faillure
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0, num = 0;

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			num = num + (power_of(2, len));
		len--;
		i++;
	}
	return (num);
}
