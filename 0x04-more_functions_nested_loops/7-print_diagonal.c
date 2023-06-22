#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 * return: nothing
 */
void print_diagonal(int n)
{
	int i = 1, j;

	if (n > 0)
	{
		while (i <= n)
		{
			j = 1;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	_putchar('\n');
}
