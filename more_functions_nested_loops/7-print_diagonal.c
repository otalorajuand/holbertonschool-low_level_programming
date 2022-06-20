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
		int i = 0;
		int j;

		while (i < n)
		{
			j = i;
			while (j--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	} else
	{
		_putchar('\n');
	}
}
