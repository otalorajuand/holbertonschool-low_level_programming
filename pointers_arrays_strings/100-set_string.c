#include <stdio.h>
#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The double pointer of the source string.
 * @to: The char to point to.
* Return: Nothing.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
