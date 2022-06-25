#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

	if (n < 0)
	{
		i = 0;
		while (i < sizeof(a) / sizeof(int))
		{
			if (i != 0)
			{
				printf(", ");
			}
			printf("%d", a[i]);
			i++;
		}
		printf("\n");
	} else
	{
		i = n;
		while (i--)
		{
			if (i != n - 1)
			{
				printf(", ");
			}
			printf("%d", a[i]);
		}

		i = n;
		while (i < sizeof(a) / sizeof(int))
		{
			printf(", ");
			printf("%d", a[i]);
			i++;
		}
		printf("\n");
	}
}
