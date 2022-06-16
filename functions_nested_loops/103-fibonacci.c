#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	unsigned long counter = 0;
	unsigned long n1 = 0;
	unsigned long n2 = 1;
	int flag = 0;
	unsigned long n2aux;
	unsigned long end_number = 4000000;

	while (flag == 0)
	{
		if ((n2 + n1) % 2 == 0)
		{
			counter += (n2 + n1);
		}
		n2aux = n2;
		n2 = n2 + n1;
		n1 = n2aux;
		if (n2 > end_number)
		{
			flag = 1;
		}
	}
	printf("%ld\n", counter);
	return (0);
}
