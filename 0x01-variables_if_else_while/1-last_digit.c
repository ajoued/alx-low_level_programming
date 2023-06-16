#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * prints the last digit of a number
 * and tells whether it's
 * greater then 5
 * less then 6 and not zero
 * zero
 * Return: 0 Always
 *
*/
int main(void)
{
	int n;
	int lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdig = n % 10;
	if (last
	printf("Last digit of %d is %d 
	return (0);
}
