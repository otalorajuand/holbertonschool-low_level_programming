#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rot13 - Encodes a string into rot13.
 * @s: Input String.
 *
* Return: The pointer to the encoded string.
 */

char *rot13(char *s)
{
	int i;
	int j;
	int len = strlen(s);

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int len_input = strlen(input);

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len_input)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);

}
