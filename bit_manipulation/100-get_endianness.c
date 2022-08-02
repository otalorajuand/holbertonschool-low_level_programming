#include <stdio.h>
#include <stdint.h>
#include "main.h"

/**
  * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	int16_t i = 1;
	int8_t *p = (int8_t *) &i;

	return (p[0]);
}
