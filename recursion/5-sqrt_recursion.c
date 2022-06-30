#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The inout number.
* Return: Returns the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (1 + _sqrt_recursion(n - ));
}
