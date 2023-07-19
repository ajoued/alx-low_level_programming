#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main program
 * @argc: number of arguments passed to the function
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*foo)(int, int) = get_op_func(argv[2]);

	argc = argc;
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (strcmp(argv[2], "/") == 0 && b == 0)
	{
		printf("Error\n");
		return (98);
	}

	if (strcmp(argv[2], "%") == 0 && b == 0)
	{
		printf("Error\n");
		return (98);
	}

	if (foo == NULL)
	{
		printf("Error2\n");
		return (99);
	}

	printf("%d\n", foo(a, b));
	return (0);
}
