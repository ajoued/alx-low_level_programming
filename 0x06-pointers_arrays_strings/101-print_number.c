#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int t;
	int divisor = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	t = n;
	while (t / 10 != 0)
	{
		divisor = divisor * 10;
		t = t / 10;
	}
	while (divisor != 0)
	{
		_putchar('0' + n / divisor);
		n = n % divisor;
		divisor = divisor / 10;
	}
}
