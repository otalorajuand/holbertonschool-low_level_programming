#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: A pointer to th first element of the array.
 * @size: The size of the array.
 * @value: The value to be found.
* Return: The position of the value, or -1 if not found.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int lo = 0, hi = 0, pos = 0;

	if (!array)
		return (-1);

	hi = size - 1;

	while ((array[hi] != array[lo]) &&
			(value >= array[lo]) && (value <= array[hi]))
	{
		pos = lo + ((value - array[lo]) * (hi - lo) / (array[hi] - array[lo]));

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			lo = pos + 1;
		else if (value < array[pos])
			hi = pos - 1;
		else
			return (pos);
	}

	if (array[lo] == value)
		return (lo);

	return (-1);
}
