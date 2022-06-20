#include "main.h"


/**
 * print_diagonal - Prints a diagonal line
 * @n: Length of the line
* Return: Void.
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar(' ');
		}
		_putchar('\\');
	} else
	{
		_putchar('\n');
	}
}
