#include "main.h"


/**
 * more_numbers - Prints the numbers from 0 to 14, 10 times.
 *
* Return: Void.
 */

void more_numbers(void)
{
	int i;
	int end = 14;
	int j = 0;
	int repetition = 10;

	while (j < repetition)
	{
		i = 0;
		while (i <= end)
		{
			if (i / 10 != 0)
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + i % 10);
			i++;
		}
		j++;
		_putchar('\n');
	}
}
