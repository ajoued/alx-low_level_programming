#include "main.h"

/**
 * reverse_array - everses the content of an array of integers
 * @a: the array to be treated
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, t;

	while (i <= j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
}
