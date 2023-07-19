#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to be treated
 * @size: size of the array
 * @action: function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
