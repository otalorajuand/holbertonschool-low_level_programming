#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the pointer to the string.
* Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	return (1 + _strlen_recursion(s + 1));
}
