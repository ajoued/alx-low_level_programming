#include "main.h"

/**
 * power_of - calculates the power of a number
 * @n: the number to b treated
 * @p: the power of the number
 * Return: the result
 */
int power_of(unsigned int n, unsigned int p)
{
	int result = 1;

	if (p == 0)
		return (1);
	if (n == 0)
		return (0);
	while (p > 0)
	{
		result = result * n;
		p--;
	}
	return (result);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: the converted number or 0 if problem
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 0, len;

	if (b)
	{
		len = strlen(b) - 1;
		while (b[i] != '\0')
		{
			if (b[i] != '1' && b[i] != '0')
				return (0);
			n = n + (b[i] - '0') * power_of(2, len);
			i++;
			len--;
		}
	}
return (n);
}
