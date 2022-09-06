#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: The array to search.
 * @size: The size of the array.
 * @value: The value to search in the array.
* Return: The first index where value was found, or -1
* if it was not found.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
