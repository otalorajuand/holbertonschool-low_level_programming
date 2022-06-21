#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: The pointer of the string.
* Return: Nothing.
 */

void puts2(char *str)
{
	int length = strlen(str);
	int i = 0;

	while (i < length)
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');

}
