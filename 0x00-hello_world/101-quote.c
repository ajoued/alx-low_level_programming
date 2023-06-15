#include <stdio.h>
/**
 * main - Entry point
 * prints exactely and that piece of art is useful\" - Dora Korpar, 2015-10-19
 * Return: 0 Always
 */
int main(void)
{
	char msg[61] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;

	while (msg[i] != '\0')
	{
		putchar(msg[i]);
		i++;
	}
return (1);
}
