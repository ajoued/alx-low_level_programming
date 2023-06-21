#include "main.h"
/**
 * jack_bauer - prints 1440 minutes
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int i = 0, j, k, m;

	while (i < 2)
	{
		j = 0;
		while (j < 5)
		{
			k = 0;
			while (k < 6)
			{
				m = 0;
				while (m < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(m + '0');
					_putchar('\n');
					m++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
