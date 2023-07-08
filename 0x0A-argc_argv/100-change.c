#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 if success 1 if error
 */
int main(int argc, char **argv)
{
	unsigned int a, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		coins = coins + a / 25;
		a = a % 25;
		coins = coins + a / 10;
		a = a % 10;
		coins = coins + a / 5;
		a = a % 5;
		coins = coins + a / 2;
		a = a % 2;
		coins = coins + a;
	}
	printf("%d\n", coins);
	return (0);
}	
