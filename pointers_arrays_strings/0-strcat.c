#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Concatenates a string into another.
 * @src: The pointer of the source string.
 * @dest: The pointer of the destination string.
* Return: The concatenated destionation string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = strlen(dest);

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}
