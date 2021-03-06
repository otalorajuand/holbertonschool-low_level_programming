#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Copies the first n characters of a string into another string.
 * @src: The pointer of the source string.
 * @dest: The pointer of the destination string.
 * @n: Number of characters to concatenate from second string.
 *
* Return: The copied destionation string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len_src = strlen(src);

	for (i = 0; (i < n) && (i <= len_src); i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
