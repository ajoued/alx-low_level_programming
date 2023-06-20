#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character.
 *
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
