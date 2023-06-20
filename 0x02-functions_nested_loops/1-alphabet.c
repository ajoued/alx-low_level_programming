#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: nothing.
 */
void print_alphabet(void)
{
	int i = 0;
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";		
	while (alpha[i] != '\0')
        {
                _putchar(alpha[i]);
                i++;
        }
	_putchar('\n');
}
