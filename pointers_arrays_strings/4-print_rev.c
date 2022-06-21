#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a reversed string.
 * @s: The pointer of the string.
* Return: Nothing.
 */

void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
	{
		putchar(s[length]);
	}
	putchar('\n');
}
