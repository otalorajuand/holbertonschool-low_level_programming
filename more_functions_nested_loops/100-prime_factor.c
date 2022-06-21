#include <stdio.h>

/**
 * main - find largest factor of 612852475143
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long i = 2;

	while (i < (n / 2))
	{
		if (n % i == 0)
		{
			n = n / i;
			i = 2;
		}
		else
		{
			i++;
		}

	}
	printf("%lu\n", n);
	return (0);
}
