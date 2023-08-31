#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to be treated
 * @index: index of the bit to be set to 1
 * Return: 1 if it worked -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j = 1UL;

	j = j << index;
	*n = *n | j;
	if (*n & j)
		return (1);
	else
		return (-1);
}
