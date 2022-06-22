#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - Changes all lower cases to upper case.
 * @s: Input String.
 *
* Return: The pointer to the upper string.
 */

char *string_toupper(char *s)
{
	int i = 0;
	int len = strlen(s);

	while (i <= len)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
