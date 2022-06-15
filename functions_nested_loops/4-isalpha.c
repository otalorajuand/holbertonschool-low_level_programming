#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Check if a character is alphanumeric.
 * @c: The char to be checked
 * Return: Return 1 if the char is alphanumeric, or 0 otherwise.
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	return (0);
}
