#include "main.h"
#include <stdlib.h>

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
				_putchar('0' + i);
				_putchar(':');
				_putchar('0' + j);
				_putchar('0' + k);
			}
			k++;
		}
		j++;
	}
	i++;
}
