#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings in another part of memory.
 * @s1: The first input string.
 * @s2: The second input string.
 * @n: The number of bytes of the second string to be concatenated.
* Return: The strings concatenated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_3;
	unsigned int i;
	unsigned int len_1;

	if (s2 == NULL)
	{
		s2 = "";
	} 

	if (s1 == NULL)
	{
		s1 = "";
	}

	len_1 = strlen(s1);

	str_3 = malloc(sizeof(char) * (len_1 + n) + 1);

	if (str_3 == NULL)
		return (NULL);

	for (i = 0; i <= len_1 + n - 1; i++)
	{
		if (i < len_1)
		{
			str_3[i] = s1[i];
		} else
		{
			str_3[i] = s2[i - len_1];
		}
	}
	str_3[i] = '\0';
	return (str_3);
}
