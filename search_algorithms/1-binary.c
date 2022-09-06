#include "search_algos.h"

/**
 * print_array - prints an array from lo to hi.
 * @array: the array to be printed.
 * @lo: the lower index.
 * @hi: the higher index.
* Return: Nothing.
 */

void print_array(int *array, int lo, int hi)
{
	int i;

	if (lo > hi)
		return;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		if (i > lo)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: the array to be searched.
 * @size: The size of the array.
 * @value: The value to search.
* Return: The first index where value was found, -1 if
* it was not found.
 */

int binary_search(int *array, size_t size, int value)
{
	int lo, hi, medium_index;

	lo = 0;
	hi = (int)size - 1;

	print_array(array, lo, hi);
	while (lo <= hi)
	{
		medium_index = floor((lo + hi) / 2);

		if (array[medium_index] < value)
		{
			lo = medium_index + 1;
			print_array(array, lo, hi);
		}
		else if (array[medium_index] > value)
		{
			hi = medium_index - 1;
			print_array(array, lo, hi);
		}
		else
		{
			return (medium_index);
		}
	}
	return (-1);
}

