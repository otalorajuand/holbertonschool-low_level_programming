#include "main.h"

/**
 * times_table - Prints the multiplication table of integers.
 * Return: Void.
 */

void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			_putchar('0' + (i * j) / 10);
			_putchar('0' + (i * j) % 10);
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
