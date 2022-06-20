#include "main.h"
#include <ctype.h>

/**
 * print_numbers - Prints the numbers from 0 to 9.
 *
* Return: Void.
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
