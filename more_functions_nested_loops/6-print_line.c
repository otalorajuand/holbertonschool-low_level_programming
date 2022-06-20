#include "main.h"


/**
 * print_line - Prints a line
 * @n: Length of the line
* Return: Void.
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
	
}
