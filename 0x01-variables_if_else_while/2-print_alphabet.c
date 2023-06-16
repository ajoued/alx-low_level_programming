#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * print's the alphabet in lowercase
 * return: 0 Always
 */
int main(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
return (0);
}
