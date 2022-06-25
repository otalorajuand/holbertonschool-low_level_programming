#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - Prints a number.
 * @n: number
 * Return: 0
 */

void print_number(int n)
{
	int aux = n;
	int dec = 10;
	int i;

	if (n < 0)
	{
		_putchar('-');
	}
	while (1)
	{
		i = 0;
		aux = abs(n);
		while (aux > dec)
		{
			aux /= 10;
			i++;
		}
		dec *= 10;
		_putchar('0' + aux % 10);

		if (i == 0)
		{
			break;
		}
	}
}
