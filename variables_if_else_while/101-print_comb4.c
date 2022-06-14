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
	int k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
