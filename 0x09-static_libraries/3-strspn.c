#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be treated
 * @accept: string to compare the initial segment of s with
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
