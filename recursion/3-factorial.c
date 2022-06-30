#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculates the factorial of an int.
 * @n: The input int.
* Return: The factorial of the int.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
