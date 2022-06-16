#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints the number from n to 98.
 * @n: The first int of the series
 * Return: Void.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	} else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
