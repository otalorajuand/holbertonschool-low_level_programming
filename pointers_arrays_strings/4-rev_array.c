#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - Reverses an array of ints.
 * @a: The pointer of the array.
 * @n: The number of elements in the array.
 *
* Return: The reversed array.
 */

void reverse_array(int *a, int n)
{
	while (n--)
	{
		printf("%i", a[n]);
		if (n > 0)
		{
			printf(", ");
		}
		i++;
	}
}
