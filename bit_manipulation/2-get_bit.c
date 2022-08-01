#include "main.h"


/**
  * get_bit - returns the value of a bit at a given index
  * @n: The number to search.
  * @index: The index position of the bite to return
 * Return: The bite at the given index.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int displaced_number = n >> index;

	return (displaced_number & 1);
}

