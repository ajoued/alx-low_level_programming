#include "main.h"
/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0.
 */
	void print_alphabet(void)
	{
		int i = 0;
		char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
		
		while (i != '\0')
		{
			_putchar(alpha[i]);
			i++;
		}
		_putchar('\n');
	}
