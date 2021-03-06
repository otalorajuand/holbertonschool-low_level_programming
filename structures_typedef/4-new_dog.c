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

	name_t = malloc(sizeof(char) * strlen(name) + 1);
	owner_t = malloc(sizeof(char) * strlen(owner) + 1);

	if (name_t == NULL)
		return (NULL);
	if (owner_t == NULL)
		return (NULL);

	strcpy(name_t, name);
	strcpy(owner_t, owner);

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		free(d);
		free(name_t);
		free(owner_t);
		return (NULL);
	}

	d->name = name_t;
	d->age = age;
	d->owner = owner_t;

	return (d);
}
