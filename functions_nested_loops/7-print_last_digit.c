#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Prints last digit of a number.
 * @i: The int to be checked
 * Return: Returns the last digit of a number.
 */

int print_last_digit(int i)
{
	int last = labs(i) % 10;

	_putchar('0' + last);
	return (last);
}
