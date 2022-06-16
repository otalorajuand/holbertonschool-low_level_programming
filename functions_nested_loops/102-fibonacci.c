#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	int i = 0;
	int n1 = 0;
	int n2 = 1;
	int n2aux;

	while (i <= 50)
	{
		printf("%d, ", n2 + n1);
		n2aux = n2;
		n2 = n2 + n1;
		n1 = n2aux;
		i++;
	}
	printf("\n");
	return (0);
}
