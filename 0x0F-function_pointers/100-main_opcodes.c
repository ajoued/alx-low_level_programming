#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @argc: arguments number
 * @argv: arguments array
 * Return: 0 if success
 * 1 if number of arguments isn't correct
 * -1 if number of bytes is less or equal than zero
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	char *code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	code = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", code[i]);
			break;
		}
		printf("%02hhx ", code[i]);
	}
	return (0);
}

