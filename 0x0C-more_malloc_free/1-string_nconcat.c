#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be treated
 * @s2: second string to be treated
 * @n: number of bytes to be copied
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len, i, j;

	len = strlen(s1);
	ptr = (char *)malloc((len + n + 1) * sizeof(char));
	for (i = 0; i < len; i++)
	{
		ptr[i] = s1[i];
	}
	j = len;
	for (i = 0; i < n; i++)
	{
		ptr[j] = s2[i];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
