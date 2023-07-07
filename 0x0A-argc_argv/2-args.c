#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 Always if success
 */
int main(int argc, char **argv)
{
	int i;

	argc = argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
