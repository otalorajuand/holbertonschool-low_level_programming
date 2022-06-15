#include "main.h"

/**
 * main - Prints the letters of the alphabet in lower case.
 *
 * Return: Always returns 0.
 */

int main(void)
{	
	
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return;
}
