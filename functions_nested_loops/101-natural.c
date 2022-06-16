#include "main.h"

/**
 * multiples35 - Prints the nth multiplication table of integers.
 *
 * Return: Void.
 */

int multiples35(void)
{
	int i = 0;
	int n = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n = n + i;
		}
	}
	return (n);
}
