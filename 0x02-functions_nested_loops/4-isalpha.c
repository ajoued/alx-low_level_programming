#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for lowercase character.
 * @c: the character to be checked
 * Return: 1 if lowercase 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
