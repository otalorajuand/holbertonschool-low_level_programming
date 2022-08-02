#include <stdio.h>
#include <stdint.h>
#include "main.h"


int get_endianness(void)
{
	int16_t i = 1;
	int8_t *p = (int8_t *) &i;

	return (p[0]);
}
