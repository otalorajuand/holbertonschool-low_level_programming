#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Creates a pointer to a 2 dimensional array of integers.
 * @width: The width of the array.
 * @height: The height of the array.
* Return: The pointer to the double array.
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		ptr[i] = calloc(width, sizeof(int));
	}

	return (ptr);
}
