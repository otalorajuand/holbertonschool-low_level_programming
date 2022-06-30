#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: the pointer to the string.
* Returns: Nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
