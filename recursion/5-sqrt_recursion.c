#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The inout number.
* Return: Returns the natural square root of a number.
 */


int aux_func(int n, int m);

int _sqrt_recursion(int n)
{
	return (aux_func(n, n));
}

/**
 * aux_func - Auxiliary function for keeping a variable constant.
 * @n: The inout number.
 * @m: Original input number.
* Return: Returns the natural square root of a number.
 */

int aux_func(int n, int m)
{
	if (n == 1)
	{
		return (-1);
	}

	if (n * n == m)
	{
		return (n);
	}
	return (aux_func(n - 1, m));
}
