#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 Always success
 */
int main(int argc, char **argv)
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
