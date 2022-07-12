#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a structure of type dog
 * @d: The Dogs structure name.
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
