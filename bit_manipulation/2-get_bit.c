#include "main.h"


/**
  * get_bit - returns the value of a bit at a given index
  * @n: The number to search.
  * @index: The index position of the bite to return
 * Return: The bite at the given index.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_size;
	int displaced_number;

	max_size = sizeof(n) * 8 - 1;

	if (index >= max_size)
		return (-1);

	displaced_number = n >> index;

	return (displaced_number & 1);
}

