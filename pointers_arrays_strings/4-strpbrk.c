#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The pointer of the source string.
 * @accept: The pointer of the string of bytes to accept.
* Return: pointer to the byte in s that matches one of the bytes
* in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	int min = 0;
	int len_a = strlen(accept);
	int len_s = strlen(s);

	if (s[0] != '\0' && accept[0] != '\0')
	{
		while (i <= len_a)
		{
			j = 0;

			while (j <= len_s)
			{
				if (accept[i] == s[j] && j <= min)
				{
					min = j;
				}
				j++;
			}
			i++;
		}

	}
	if (min != 0)
	{
		return (s + min);
	}
	return (NULL);
}
