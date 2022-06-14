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
	char c1;
	char c2;

	c1 = 'a';
	while (c1 <= 'z')
	{
		putchar(c1);
		c1++;
	}

	c2 = 'A';
	while (c2 <= 'Z')
	{
		putchar(c2);
		c2++;
	}
	putchar('\n');
	return (0);
}
