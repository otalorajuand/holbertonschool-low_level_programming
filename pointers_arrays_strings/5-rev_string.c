#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: The pointer of the string.
* Return: Nothing.
 */

void rev_string(char *s)
{
	int length = strlen(s);
	char saux[length];
	int i = 0;

	while (length--)
	{
		saux[i] = s[length];
	}

	s = saux;
}
