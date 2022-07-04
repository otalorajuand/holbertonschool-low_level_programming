#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
* Return: The difference of the first two differente chars.
 */

int _strcmp(char *s1, char *s2)
{
	int len = strlen(s1);
	int i = 0;

	while (i <= len)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
