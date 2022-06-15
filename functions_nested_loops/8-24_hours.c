#include "main.h"

/**
 * jack_bauer - Prints all the minutes of a day.
 * Return: Void.
 */

void jack_bauer(void)
{
	int i = 0;

	while (i <= 2)
	{
		int m = 0;

		while (m <= 9)
		{
			int j = 0;

			while (j <= 5)
			{
				int k = 0;

				while (k <= 9)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + j);
					_putchar('0' + k);
					_putchar('\n');
					k++;
				}
				j++;
			}
			if (i == 2 && m == 9)
			{
				break;
			}
			m++;
		}
		i++;
	}
}
