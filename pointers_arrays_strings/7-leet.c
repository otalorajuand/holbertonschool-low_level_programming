#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - Encodes a string into 1337.
 * @s: Input String.
 *
* Return: The pointer to the encoded string.
 */

char *leet(char *s)
{
	int i;
	int j;
	int len = strlen(s);

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int len_s1 = strlen(s1);

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len_s1)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				j++;
			}
		}
		i++;
	}
	return (s);

}
