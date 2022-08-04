#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index.
  * @n: The number to be changed.
  * @index: the index, starting from 0 of the bit you want to set
 * Return: The number changed.
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	int binary_number = 1 << index;
	unsigned int max_size;

	max_size = sizeof(n) * 8 - 1;

	if (index >= max_size)
		return (-1);

	*n |= binary_number;

	return (1);
}
