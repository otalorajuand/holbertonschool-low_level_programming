#include "main.h"


/**
 * print_square - Prints a square made of #
 * @size: Side of square
* Return: Void.
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i = size;

		while (i--)
		{
			int j = size;

			while (j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
