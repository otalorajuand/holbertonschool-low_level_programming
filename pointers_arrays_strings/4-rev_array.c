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
	int aux[n];
	int i = 0;
	int j = 0;

	while (j <= n)
	{
		aux[j] = a[j];
		j++;
	}

	while (n--)
	{
		a[i] = aux[n];
		i++;
	}
}
