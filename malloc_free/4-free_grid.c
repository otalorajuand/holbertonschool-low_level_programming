#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: The double pointer to the double array.
 * @height: The height of the array.
* Return: The freed pointer to the double array.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
