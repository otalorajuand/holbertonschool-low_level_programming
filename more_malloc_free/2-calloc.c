#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Asings memory to a pointer initialized with zeros.
 * @nmemb: The number of elements.
 * @size: The size of each element.
* Return: The pointer to the memory allocation.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb * size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);

}
