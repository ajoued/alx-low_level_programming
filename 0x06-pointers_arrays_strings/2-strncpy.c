#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: result destination string
 * @src: source string
 * @n: number of bytes to be used
 * Return: pointer to result string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
