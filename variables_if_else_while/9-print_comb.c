#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all digits in base 10 from 0 to 9
 * with a certain format comma separated.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
