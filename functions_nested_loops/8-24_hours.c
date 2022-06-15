#include "main.h"

/**
 * jack_bauer - Prints all the minutes of a day.
 * Return: Void.
 */

void jack_bauer(void)
{
	int i = 0;

	while (i <= 23)
	{
		int j = 0;

		while (j <= 5)
		{
			int k = 0;

			while (k <= 9)
			{
				if (i < 10)
				{
					_putchar('0');
				}
				_putchar('0' + i);
				_putchar(':');
				_putchar('0' + j);
				_putchar('0' + k);
				_putchar('\n');
				k++;
			}
			j++;
		}
		i++;
	}
}
