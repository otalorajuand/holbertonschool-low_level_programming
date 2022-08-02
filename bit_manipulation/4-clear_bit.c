#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index.
  * @n: The number to be changed.
  * @index: the index, starting from 0 of the bit you want to set
 * Return: The number changed.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int binary_number = 1 << index;

	*n = ~((~*n) | binary_number);

	return (1);
}
