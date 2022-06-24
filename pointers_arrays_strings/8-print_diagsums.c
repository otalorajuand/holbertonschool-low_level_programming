#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The pointer of the double array.
 * @size: The size of the matrix.
* Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int diag1 = 0;
	int diag2 = 0;

	while (i < size)
	{
		diag1 += a[i][i];
		i++;
	}
	printf("%d, ", diag1);

	while (j < size)
	{
		diag2 += a[j][j];
		j++;
	}
	printf("%d", diag2);
}
