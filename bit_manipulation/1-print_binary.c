#include "main.h"
#include <math.h>

/**
  * print_binary - prints the binary representation of a number.
  * @n: the number to be converted.
 * Return: Nothing.
  */

void print_binary(unsigned long int n)
{
	while (n != 0)
	{
		_putchar((int)n & 1);
		n >>= 1;
	}
}

