#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be treated
 * @c: charaacter we are looking for
 * Return: a pointer to the character found c
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
