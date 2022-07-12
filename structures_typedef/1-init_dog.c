#include <stdio.h>

/**
 * init_dog - Initializes a structure of type dog
 * @d: The Dogs structure name.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	{d->name = name,
	d->age = age,
	d->owner = owner;
	}
}
