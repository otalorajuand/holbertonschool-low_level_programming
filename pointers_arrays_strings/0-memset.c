#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - Fills memory with a constant byte.
 * @s: The pointer of the source string.
 * @b: The character to put.
 * @n: The number of characters to be changed
* Return: The changed destionation string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (s[0] != '\0')
	{
		while (i <= n)
		{
			s[i] = b;
			i++;
		}
	}

	return (s);
}
