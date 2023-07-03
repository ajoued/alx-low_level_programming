#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the array to be treated
 * @size: the size of the array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
	}
	printf("%d, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
	{
		sum = sum + a[size * i + (size - 1 - i)];
	}
	printf("%d\n", sum);
}
