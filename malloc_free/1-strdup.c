#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string in another part of memory.
 * @str: The input string.
* Return: The string modified.
 */

char *_strdup(char *str)
{
	char *str_2;
	int i;
	int len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	str_2 = malloc(sizeof(char) * len);
	for (i = 0; i < len; i++)
	{
		str_2[i] = str[i];
	}
	return (str_2);
}
