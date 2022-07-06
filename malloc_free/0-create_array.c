#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: the size of the string
 * @c: the specific char
* Return: The string modified.
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);
	str[0] = c;

	return (str);
}
