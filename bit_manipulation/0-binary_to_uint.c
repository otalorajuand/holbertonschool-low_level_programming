#include "main.h"
#include <math.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b: a string of 0 and 1 characters.
 * Return: the converted number, or NULL if b is NULL or badly specified.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i, len, ascii_zero = 48;
	int base = 1;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if ((b[i] - ascii_zero) != 0 && (b[i] - ascii_zero) != 1)
			return (0);

		res += (b[i] - ascii_zero) * base;
		base <<= 1;
	}
	return (res);
}
