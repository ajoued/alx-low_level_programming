#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: result return pointer
 * @b: constant byte
 * @n: n bytes of the memory to be filled
 * Return: pointer to mzmory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
