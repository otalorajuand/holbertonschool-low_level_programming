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
	int len = strlen(s);

	i = 0;
	while (i < len)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';

		} else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';

		} else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		} else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		} else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
		i++;
	}
	return (s);

}
