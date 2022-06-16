#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all double digits in base 10 from 0 to 9
 * with a certain format comma separated.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = 0;
		while (j <= 99)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
