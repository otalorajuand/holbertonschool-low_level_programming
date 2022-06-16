#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	int i = 0;
	unsigned long counter = 0;
	unsigned long n1 = 0;
	unsigned long n2 = 1;
	long final_fibo = 4000000;
	unsigned long n2aux;

	while (i < final_fibo)
	{
		if ((n2 + n1) % 2 == 0)
		{
			counter += (n2 + n1);
		}
		n2aux = n2;
		n2 = n2 + n1;
		n1 = n2aux;
		i++;
	}
	printf("%ld\n", counter);
	return (0);
}
