#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i = 0, j;
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 10)
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			_putchar(alpha[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
