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
	int aux;

	i = 0;
	while (i < n)
	{
		aux = a[n - 1];
		a[i] = a[n - 1];
		a[n - 1] = aux;
		i++;
		n--;
	}
}
