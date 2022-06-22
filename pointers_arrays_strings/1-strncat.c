#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concatenates a string into another.
 * @src: The pointer of the source string.
 * @dest: The pointer of the destination string.
 * @n: Number of characters to concatenate from second string.
 *
* Return: The concatenated destionation string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = strlen(dest);

	while (i <= n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j + 1] = '\0';
	return (dest);
}
