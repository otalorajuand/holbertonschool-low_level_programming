#include "search_algos.h"

/**
 * _min - Finds the minimum between two integers.
 * @a: The first integer.
 * @b: The second integer.
* Return: The minimum between the integers.
 */

int _min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}


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
 * binary_search_exp - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: the array to be searched.
 * @value: The value to search.
 * @lo: The lower bound for the array.
 * @hi: The upper bound for the array.
* Return: The first index where value was found, -1 if
* it was not found.
 */

int binary_search_exp(int *array, int value, int lo, int hi)
{
	int medium_index;

	printf("Value found between indexes [%d] and [%d]\n", lo, hi);
	print_array(array, lo, hi);
	while (lo <= hi)
	{
		medium_index = floor((lo + hi) / 2);

		if (value < array[medium_index])
		{
			hi = medium_index - 1;
			print_array(array, lo, hi);
		}
		else if (value > array[medium_index])
		{
			lo = medium_index + 1;
			print_array(array, lo, hi);
		} else
			return (medium_index);
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 * @value: The value to be found.
* Return: The position of the value, -1 if not found.
 */

int exponential_search(int *array, size_t size, int value)
{
	int upper_bound = 0;

	if (!array)
		return (-1);

	upper_bound = 1;
	while (upper_bound < (int)size && array[upper_bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", upper_bound, array[upper_bound]);
		upper_bound *= 2;
	}

	return (binary_search_exp(array, value, upper_bound / 2,
				_min(upper_bound, (int)size - 1)));
}
