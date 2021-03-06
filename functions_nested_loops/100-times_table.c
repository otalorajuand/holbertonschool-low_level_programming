#include "main.h"

/**
 * print_times_table - Prints the nth multiplication table of integers.
 * @n: the nth table
 * Return: Void.
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i = 0;

		while (i <= n)
		{
			int j = 0;

			while (j <= n)
			{
				if ((i * j) > 99)
				{
					_putchar('0' + (i * j) / 100);
					_putchar('0' + ((i * j) / 10) % 10);
				} else if ((i * j) > 9)
				{
					_putchar(' ');
					_putchar('0' + (i * j) / 10);
				} else
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
				_putchar('0' + (i * j) % 10);

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
			if (i <= n)
			{
				_putchar('\n');
			}
			i++;
		}
	}
}
