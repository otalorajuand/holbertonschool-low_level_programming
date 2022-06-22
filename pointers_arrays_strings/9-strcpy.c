#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copies a string into another
 * @src: The pointer of the source string.
 * @dest: The pointer of the destination string.
* Return: Nothing.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);

}
