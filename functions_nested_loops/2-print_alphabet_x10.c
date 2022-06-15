#include "main.h"

/**
 * print_alphabet_x10 - Prints the letters of the alphabet in lower case.
 * 10 times
 * Return: Always returns void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
