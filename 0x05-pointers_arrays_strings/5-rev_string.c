#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j;
	char t[1];

	j = strlen(s) - 1;
	i = 0;
	while (i < j)
	{
		t[0] = s[i];
		s[i] = s[j];
		s[j] = t[0];
		i++;
		j--;
	}
}
