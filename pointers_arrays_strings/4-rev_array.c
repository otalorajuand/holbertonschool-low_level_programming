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
	int i;

	i = n;
	while (i != 0)
	{
		if (i != n)
			printf(", ");
		printf("%d", a[i]);

		if (i > 0)
		{
			i--;
		} else
		{
			i++;
		}
	}
	printf("\n");
}
