#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a structure of type dog
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner name.
 * Return: The new created dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
