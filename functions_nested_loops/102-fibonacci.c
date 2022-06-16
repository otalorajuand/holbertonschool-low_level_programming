#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	int i = 0;
	int n1 = 1;
	int n2 = 2;

	while (i <= 50)
	{
		printf("%d, ", n2);
		n1 = n2;
		n2 = n2 + n1;
		i++;
	}
	printf("\n");
	return (0);
}
