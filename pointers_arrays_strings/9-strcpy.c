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
	int len = strlen(src);
	int i = 0;

	while (i < len - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);

}
