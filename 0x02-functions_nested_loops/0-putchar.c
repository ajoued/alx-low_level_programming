#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char msg[9] = "_putchar";
	int i = 0;

	while (msg[i] != '\0')
	{
		putchar(msg[i]);
		i++;
	}
	putchar('\n');
return (0);
}
