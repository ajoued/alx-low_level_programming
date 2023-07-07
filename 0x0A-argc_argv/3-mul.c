#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 if success 1 if error
 */
int main(int argc, char **argv)
{
	int a, b, result;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);;
		b = atoi(argv[2]);
		(void)argc;
		result = a * b;
		printf("%d\n", result);
		return 1;
	}
}
