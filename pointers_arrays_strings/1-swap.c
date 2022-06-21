#include "main.h"

/**
 * swap_int - Swaps two integers
 * @a: the first integer to change.
 * @b: the second integer to change.
* Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;

}
