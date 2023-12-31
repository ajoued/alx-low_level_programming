#include "main.h"

/**
 * is_prime - determin if an int is a prime number
 * @n: number to be treated
 * @i: iterator
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i - 1));
}

/**
 * is_prime_number - tells if the input int is prime
 * @n: number to be treated
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}
