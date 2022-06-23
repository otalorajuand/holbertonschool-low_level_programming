#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - Fills memory area.
 * @src: The pointer of the source string.
 * @dest: The pointer of the destination string.
 * @n: The number of characters to be changed
* Return: The changed destionation string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (src[0] != '\0')
	{
		while (i < n)
		{
			&dest[i] = &src[i];
			i++;
		}
	}

	return (dest);
}
