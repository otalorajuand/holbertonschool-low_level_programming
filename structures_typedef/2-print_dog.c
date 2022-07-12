#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the elements a structure of type dog
 * @d: The Dogs structure name.
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		} else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		} else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
