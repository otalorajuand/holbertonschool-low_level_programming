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
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 * @value: The value to find in the array.
* Return: The index of the value, or -1 if it isn't in the array.
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = 0, lo = 0, hi = 0;

	if (!array)
		return (-1);

	jump = floor(sqrt((int)size));
	hi = jump;

	printf("Value checked array[%d] = [%d]\n", lo, array[lo]);
	while (array[_min(hi, (int)size) - 1] < value)
	{
		lo = hi;
		hi += jump;
		if (hi >= (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", lo, array[lo]);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", lo, array[lo]);
	}

	printf("Value found between indexes [%d] and [%d]\n", lo, hi);
	printf("Value checked array[%d] = [%d]\n", lo, array[lo]);
	while (array[lo] < value)
	{
		lo++;
		if (lo == _min(hi, (int)size))
			return (-1);
		printf("Value checked array[%d] = [%d]\n", lo, array[lo]);
	}

	if (array[lo] == value)
		return (lo);

	return (-1);
}
