#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be treated
 * Return: a pointer to result string
 */

char *leet(char *s)
{
	char *leet = "aAeEoOtTlL";
	char *repl = "4433007711";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (s[i] == leet[j])
				s[i] = repl[j];
		}
		i++;
	}
	return (s);
}
