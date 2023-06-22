#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 * return: nothing
 */
void more_numbers(void)
{
	int i = 0, j;
	char *num = "01234567891011121314";

	while (i < 10)
	{
		j = 0;
		while (num[j] != '\0')
		{
			_putchar(num[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
