#include "main.h"

/**
 * jack_bauer - Prints all the minutes of a day.
 * Return: Void.
 */

void jack_bauer(void)
{
	int i;
	int m;
	int j;
	int m;

	i = 0;

	while (i <= 2)
	{
		m = 0;

		while (m <= 9)
		{

			j = 0;

			while (j <= 5)
			{
				k = 0;

				while (k <= 9)
				{
					_putchar('0' + i);
					_putchar('0' + m);
					_putchar(':');
					_putchar('0' + j);
					_putchar('0' + k);
					_putchar('\n');
				}
				k++;
			}
			j++;
		}
		m++;
	}
	i++;
}
