#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	int i = 0;
	long n1 = 0;
	long n2 = 1;
	long n2aux;
	int end_number = 98;

	while (i < end_number)
	{
		printf("%ld", n2 + n1);
		if (i < 49)
		{
			printf(", ");
		}
		n2aux = n2;
		n2 = n2 + n1;
		n1 = n2aux;
		i++;
	}
	printf("\n");
	return (0);
}
