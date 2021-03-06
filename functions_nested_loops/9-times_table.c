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
			if (j == 0)
			{
				_putchar('0' + (i * j) % 10);
			}
			else if ((i * j) / 10 == 0)
			{
				_putchar(' ');
				_putchar('0' + (i * j) % 10);
			} else
			{
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		if (i <= 9)
		{
			_putchar('\n');
		}
		i++;
	}
}
