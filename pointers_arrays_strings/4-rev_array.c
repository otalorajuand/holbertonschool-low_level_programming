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
	int len = n;
	int aux[len];
	int i = 0;
	int j = 0;

	while (j <= n)
	{
		aux[j] = a[j];
		j++;
	}

	while (len--)
	{
		a[i] = aux[len];
		i++;
	}
}
