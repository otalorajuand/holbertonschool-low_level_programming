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
	int len = strlen(s);
	char saux[len];
	int i = 0;

	while (len--)
	{
		saux[i] = s[len];
	}

	s = saux;
}
