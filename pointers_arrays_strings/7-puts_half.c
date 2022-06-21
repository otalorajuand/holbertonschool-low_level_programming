#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: The pointer of the string.
* Return: Nothing.
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int i = (length / 2) + 1;

	while (i < length)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');

}
