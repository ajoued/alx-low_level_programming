#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be treated
 * @index: index of the bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j = 1UL;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	j = j << index;
	if (n & j)
		return (1);
	else
		return (0);
}
