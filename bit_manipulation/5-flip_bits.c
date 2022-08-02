#include "main.h"

/**
  * flip_bits - returns the number of bits you would need
  * to flip to get from one number to another.
  * @n: The first number to be compared.
  * @m: The second number to be compared.
 * Return: The number of bits you would need to flip to
 * get from one number to another.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int comparison = n ^ m;

	while (comparison != 0)
	{
		counter += comparison & 1;
		comparison >>= 1;
	}

	return (counter);
}
