#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * prints the alphabet in revrse
 * Return: 0 Always
 */
int main(void)
{
	int i = 0;

	do {
		putchar(48 + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	} while (i < 10);
	putchar('\n');
return (0);
}
