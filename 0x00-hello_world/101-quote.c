#include <stdio.h>
/**
 * main - Entry point
 * prints exactely and that piece of art is useful\" - Dora Korpar, 2015-10-19
 * Return: 0 Always
 */
int main(void)
{
	char mg[61] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;

	while (mg[i] != '\0')
	{
		putchar(mg[i]);
		i++;
	}
return (1);
}
