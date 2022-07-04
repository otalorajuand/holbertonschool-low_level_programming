#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks wheteher a char is a digit.
 * @c: Character to check
* Return: 1 if c is a digit, and 0 otherwise.
 */


int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
