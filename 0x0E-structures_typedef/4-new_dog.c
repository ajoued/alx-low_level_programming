#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog
 * NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;

	name_copy = name;
	owner_copy = owner;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL || name == NULL || owner == NULL)
		return (NULL);

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
