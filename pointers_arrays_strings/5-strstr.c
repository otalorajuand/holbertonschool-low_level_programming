#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The pointer of the string.
 * @needle: The pointer of the substring to find.
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int k;
	int len_needle = strlen(needle);
	int len_haystack = strlen(haystack);

	if (haystack[0] != '\0' && needle[0] != '\0')
	{
		while (i <= len_haystack)
		{
			j = 0;
			k = i;
			while (haystack[k] == needle[j])
			{
				j++;
				k++;
				if (j == len_needle)
				{
					return (haystack + i);
				}
			}
			i++;
		}

	}
	return (NULL);
}
