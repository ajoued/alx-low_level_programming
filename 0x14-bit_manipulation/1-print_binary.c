#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be treated
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int j = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i = 0, first1 = 0, size;

	size = sizeof(unsigned long int) * 8;
	if (n == 0)
		_putchar('0');
	else
		while (i < size)
		{
			if (n & j)
			{
				first1 = 1;
				_putchar('1');
			}
			else if (first1 == 1)
			{
				_putchar('0');
			}
			j = j >> 1;
			i++;
		}
}
