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
		if (n < 0)
		{
			if (abs(n) / 10 == 0)
			{
				_putchar('-');
				_putchar('0' + abs(n) % 10);
			} else
			{
				_putchar('-');
				_putchar('0' + abs(n) / 10);
				_putchar('0' + abs(n) % 10);
			}
		} else
		{
			if (n / 10 == 0)
			{
				_putchar('0' + n % 10);
			} else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
		}
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		} else
		{
			_putchar('\n');
		}
		n++;
	}
}
