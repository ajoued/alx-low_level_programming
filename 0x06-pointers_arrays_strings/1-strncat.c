#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destinaton string
 * @src: source string
 * @n: number of bytes to be used
 * Return: ponter to the result string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
