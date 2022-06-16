#include <stdio.h>

/**
 * main - Prints the sum of all the multiples of 3 and 5 until 1024.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	int i = 0;
	int n = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n = n + i;
		}
		i++;
	}
	printf("%d\n", n);
	return (0);
}
