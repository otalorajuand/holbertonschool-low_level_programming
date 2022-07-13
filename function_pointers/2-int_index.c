#include <stdio.h>


/**
 * int_index - searches for an integer.
 * @array: the array of values.
 * @size: the size of the array.
 * @cmp: the compare function to execute
 * Return: 0 if the number is not in the array, otherwise 1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int len = size;

	if (size <= 0)
		return (-1);

	for (i = 0; i < len; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
