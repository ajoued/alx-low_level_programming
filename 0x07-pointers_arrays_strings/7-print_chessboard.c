#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the board
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] == ' ')
			{
				_putchar(a[i][j]);
				j = 8;
			}
			else
				_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
