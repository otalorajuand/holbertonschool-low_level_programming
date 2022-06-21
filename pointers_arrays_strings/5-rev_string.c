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
	char saux[];
	int i = 0;

	while (length--)
	{
		putchar(s[length]);
		saux[i] = s[length]
	}
	*s = saux;
}
