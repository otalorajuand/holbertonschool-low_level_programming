#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First integer
 * @n2: Second integer
 * @r: buffer to store the output
 * @size_r: size of the buffer
* Return: The pointer to the result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

	char suma;
	int i;
	char reminder = '\0';

	for (i = size_r - 1; i >= 0; i--)
	{
		if (reminder == '\0')
		{
			suma = n1[i] + n2[i] - 48;
		} else
		{
			suma = n1[i] + n2[i] + reminder - 96;
			reminder = '\0';
		}

		if (suma <= '9')
		{
			r[i] = suma;
		} else
		{
			reminder = '1';
			r[i] = suma - 10;
		}
	}
	return (r);
}
