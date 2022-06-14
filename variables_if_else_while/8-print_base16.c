#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all digits in base 16 from 0 to 9..
 *
 * Return: Always returns 0.
 */
int main(void)
{
	int i;
	char c;

	i = 0;
	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}

	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
