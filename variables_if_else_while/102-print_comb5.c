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
	int m;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 8)
		{
			k = i;
			while (k <= 9)
			{
				m = j + 1;
				while (m <= 9)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + m);
					if ((i + j) < 17)
					{
						putchar(',');
						putchar(' ');
					}
					m++;
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
