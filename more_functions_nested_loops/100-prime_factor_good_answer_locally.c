#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143.
 *
* Return: Void.
 */


/**
 * check_if_prime - Check whether a number is a prime.
 * @a: number
* Return: 1 if number is prime, 0 otherwise.
 */
int check_if_prime(unsigned long a);

int main(void)
{
	unsigned long i = 3;
	unsigned long number = 612852475143;
	unsigned long result;

	while (i < number / 2)
	{
		if (number % i == 0 && check_if_prime(i) == 1)
		{
			result = i;
		}
		i = i + 2;
	}
	printf("%ld\n", result);
	return (0);
}

/**
 * check_if_prime - Check whether a number is a prime.
 * @a: number
* Return: 1 if number is prime, 0 otherwise.
 */
int check_if_prime(unsigned long a)
{
	unsigned long i = 2;

	if (a == 2)
	{
		return (1);
	}

	while (i < a / 2)
	{
		if (a % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);

}
