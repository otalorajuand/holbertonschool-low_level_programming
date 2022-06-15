#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - Prints the number from n to 98.
 * @n: The first int of the series
 * Return: Void.
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
