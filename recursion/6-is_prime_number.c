#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - Checks if a number is primee.
 * @n: The inout number.
* Return: Returns 1 if the number is prime, and 0 otherwise.
 */

int is_prime_number(int n)
{
	return (aux_func(n - 1, n));
}

/**
 * aux_func_prime - Auxiliary function for keeping a variable constant.
 * @m: The inout number.
 * @n: Original input number.
* Return: Returns the natural square root of a number.
 */

int aux_func_prime(int n, int m)
{
	if (n <= 0)
	{
		return (0);
	}

	if (n == 1)
	{
		return (1);
	}

	if (m % n == 0)
	{
		return (0);
	}
	return (aux_func_prime(n - 1, m));
}
