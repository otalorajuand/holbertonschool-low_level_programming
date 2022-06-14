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
	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i < 8)
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
