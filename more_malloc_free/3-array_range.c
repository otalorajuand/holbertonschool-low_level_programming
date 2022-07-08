#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers.
 * @min: The lower limit of the array.
 * @max: The upper limit of the array.
* Return: The array.
 */

int *array_range(int min, int max)
{
	int *res;
	int i;

	if (min > max)
		return (NULL);

	res = malloc(sizeof(int) * (max - min + 1));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		res[i] = i + min;

	return (res);
}
