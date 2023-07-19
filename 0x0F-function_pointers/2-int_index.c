#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an int
 * @array: array to be treated
 * @size: size of the array
 * @cmp: comparing fucnction
 * Return: the index of the first element when cmp return 1
 * if no elements matches return -1
 * if size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
