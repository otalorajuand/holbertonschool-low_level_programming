#include "main.h"


/**
 * print_triangle - Prints a triangle made of #
 * @size: Side of triangle
* Return: Void.
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i = size;

		while (i--)
		{
			int j = 1;

			while (j <= size)
			{
				if (j < i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				j++;
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
