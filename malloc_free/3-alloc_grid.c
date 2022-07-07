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
	int i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
