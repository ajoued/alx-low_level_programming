#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: nothing
 */

void print_number(int n)
{
	int t = n;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while (t / 10 != 0)
		{
			divisor = divisor * 10;
			t = t / 10;
		}
		_putchar('0' + n / divisor);
		while (divisor != 1)
		{
			divisor = divisor / 10;
			_putchar('0' + (n / divisor) % 10);
		}
	}
}
