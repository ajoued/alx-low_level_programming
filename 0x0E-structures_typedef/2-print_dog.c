#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct to be treated
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *n = "(nil)";

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s\n", n);
		else
			printf("Name: %s\n", d->name);

		printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: %s\n", n);
		else
			printf("Owner: %s\n", d->owner);
	}
}
