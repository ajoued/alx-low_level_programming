#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be treated
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i,  first1 = 0;
	unsigned long int j = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
		putchar('0');
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (n & j)
		{
			first1 = 1;
			putchar('1');
		}
		else if (first1 == 1)
		{
			putchar('0');
		}
		j = j >> 1;
	}
}
