#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates an array.
 * @ptr: The pointer already created.
 * @old_size: The old size of the array.
 * @new_size: The new size of the array.
* Return: The new allocated array.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size || ptr == NULL)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
