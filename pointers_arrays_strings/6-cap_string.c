#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Input String.
 *
* Return: The pointer to the capitalized string.
 */

char *cap_string(char *s)
{
	int i = 1;
	int len = strlen(s);

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}

	while (i <= len)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t')
			{
				s[i + 1] -= 32;
			} else if (s[i - 1] == '\n' || s[i - 1] == ',')
			{
				s[i] -= 32;
			} else if (s[i - 1] == ';' || s[i - 1] == '.')
			{
				s[i] -= 32;
			} else if (s[i - 1] == '!' || s[i - 1] == '?')
			{
				s[i] -= 32;
			} else if (s[i - 1] == '"' || s[i - 1] == '(')
			{
				s[i] -= 32;
			} else if (s[i - 1] == ')' || s[i - 1] == '{')
			{
				s[i] -= 32;
			} else if (s[i - 1] == '}')
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
