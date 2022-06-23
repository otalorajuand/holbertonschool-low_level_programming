#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The pointer of the source string.
 * @c: The char to look in the string.
* Return: a pointer to the first occurrence
* of the character c in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int len = strlen(s);

	if (c != '\0')
	{
		while (i < len)
		{
			if (s[i] == c)
			{
				return ((s + i));
			}
			i++;
		}
		return (NULL);
	} else 
	{

		return ('\n');
	}
}
