#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be treated
 * Return: pointer to the treated string
 */

char *rot13(char *s)
{
	char *half1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *half2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char t;
	int i = 0, j;

	while (s[i] != '\0')
	{
		t = s[i];
		for (j = 0; half1[j] != '\0'; j++)
		{
			if (t == half1[j])
			{
				s[i] = half2[j];
			}
		}
		i++;
	}
	return (s);
}
