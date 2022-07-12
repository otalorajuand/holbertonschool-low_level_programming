#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	char *name_t;
	char *owner_t;

	name_t = malloc(sizeof(char) * strlen(name));
	owner_t = malloc(sizeof(char) * strlen(owner));

	strcpy(name_t, name);
	strcpy(owner_t, owner);

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	d->name = name_t;
	d->age = age;
	d->owner = owner_t;

	return (d);
}
