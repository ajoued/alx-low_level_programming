#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @argc: number of arguments passed to the function
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*foo)(int, int);

	argc = argc;
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	foo = get_op_func(argv[2]);
	if (foo == NULL)
	{
		printf("Error\n");
		return(99);
	}
	return (foo(a, b));
}
