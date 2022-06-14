#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all letters from the alphabet in lowercase.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
