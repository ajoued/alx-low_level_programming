#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be treated
 * @needle: string to be matched
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
