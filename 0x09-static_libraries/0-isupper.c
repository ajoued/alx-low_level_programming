#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 * @c: the character to be treated
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c) == 0)
		return (0);
	else
		return (1);
}
