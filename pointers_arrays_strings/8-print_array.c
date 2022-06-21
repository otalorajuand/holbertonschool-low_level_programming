#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - Prints the first n elements of an array.
 * @a: The pointer of the array.
 * @n: the number of elements to be printed
* Return: Nothing.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%i", a[i]);

		if (i < (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");

}
