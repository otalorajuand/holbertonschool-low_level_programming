#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The pointer of the source string.
 * @accept: The pointer of the string of bytes to accept.
* Return: the number of bytes in the initial segment of s
* which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int k = 0;
	int j;
	int len = strlen(accept);

	while (k <= n)
	{
		j = 0;

		while (j <= n)
		{
			if (accept[k] == s[j])
			{
				i++;
			}
		}
		k++;
	}
	return (i);
}
