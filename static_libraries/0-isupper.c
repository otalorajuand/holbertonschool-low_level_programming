#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks wheteher a char is upper.
 * @c: Character to check
* Return: Always returns 0.
 */


int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
