#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: number to be treated
 * @index: index of the bit to be set to 1
 * Return: 1 if it worked -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j = 1UL;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	j = j << index;
	j = ~j;
	*n = *n & j;
	return (1);
}
