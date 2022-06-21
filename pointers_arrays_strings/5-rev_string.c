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
	char saux[500] = "Holberton";
	int i = 0;

	strcpy(saux, s);

	while (len--)
	{
		*(s + i) = saux[len];
		i++;
	}

}
