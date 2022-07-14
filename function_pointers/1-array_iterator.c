#include <stdio.h>


/**
 * array_iterator - executes a function with values of an array.
 * @array: the array of values.
 * @size: the size of the array.
 * @action: the function to execute
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int len = size;

	if (array != NULL && action != 0)
	{
		for (i = 0; i < len; i++)
		{
			action(array[i]);
		}
	}
}
