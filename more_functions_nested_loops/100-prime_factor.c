#include <stdio.h>


/**
 * main - Prints the largest prime factor of the number 612852475143.
 *
* Return: Void.
 */

int check_if_prime(int a);

int main(void)
{
	unsigned long int i = 1;
	unsigned long int number = 612852475143;
	unsigned long int result;
	
	while (i <= number / 2)
	{
		if (number % i == 0)
		{
			if (check_if_prime(i))
			{
				result = i;
			}

		}
		i = i + 2;
	}
	printf("%ld\n", result);
	return (0);
}

int check_if_prime(int a)
{
	int i = 2;

	if (a == 2)
		return (1);

	while (i < a)
	{
		if (a % i == 0)
			return (0);
		i++;
	}
	return (1);

}
