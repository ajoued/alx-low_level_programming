#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the variable to be treated
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL)
		name = "";
	d->name = name;
	d->age = age;
	d->owner = owner;
}
