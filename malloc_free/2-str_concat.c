#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings in another part of memory.
 * @s1: The first input string.
 * @s2: The second input string.
* Return: The string modified.
 */

char *str_concat(char *s1, char *s2)
{
	char *str_3;
	char *str_null;
	int i;
	int len_1;
	int len_2;

	if (s2 == NULL && s2 == NULL)
	{
		str_null = "\n";
		return (NULL);
	} else if (s2 == NULL)
	{
		return (s1);
	} else if (s1 == NULL)
	{
		return (s2);
	}

	len_1 = strlen(s1);
	len_2 = strlen(s2);
	str_3 = malloc(sizeof(char) * (len_1 + len_2) + 1);

	if (str_3 == NULL)
		return (NULL);

	for (i = 0; i <= len_1 + len_2; i++)
	{
		if (i < len_1)
		{
			str_3[i] = s1[i];
		} else
		{
			str_3[i] = s2[i - len_1];
		}
	}
	return (str_3);
}
