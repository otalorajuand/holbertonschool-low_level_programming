#include "main.h"


/**
 * print_most_numbers - Prints the numbers from 0 to 9.
 * Except the 2 and the 4.
* Return: Void.
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != '2' && i != '4')
		{
			_putchar('0' + i);
		}
		i++;
	}
	_putchar('\n');
}
