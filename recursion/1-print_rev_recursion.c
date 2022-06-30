#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Prints a string in reverse, followed by a new line.
 * @s: the pointer to the string.
* Returns: Nothing.
 */

void _print_rev_recursion(char *s)
{
	if (*(s + strlen(s)) == '\n')
	{
		putchar('\n');
		return;
	}
	putchar(*(s + strlen(s)));
	_print_rev_recursion(s - 1);
}
