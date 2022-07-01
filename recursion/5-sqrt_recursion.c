#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The inout number.
* Return: Returns the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	return (aux_func_sqrt(n, n));
}

/**
 * aux_func_sqrt - Auxiliary function for keeping a variable constant.
 * @n: The input number.
 * @m: Original input number.
* Return: Returns the natural square root of a number.
 */

int aux_func_sqrt(int n, int m)
{
	unsigned long n_aux = n;
	unsigned long multiplicacion = n_aux * n_aux;
	unsigned long original = m;

	if (n < 0)
	{
		return (-1);
	}

	if (multiplicacion == original)
	{
		return (n);
	}
	return (aux_func_sqrt(n - 1, m));
}
