#include "main.h"
#include <wctype.h>

/**
 * _islower - Check if a character is lowercase.
 * @c: The char to be checked
 * Return: Return 1 if the char is lowercase, or 0 otherwise.
 */

int _islower(int c)
{
	if (iswlower(c) != 0)
	{
		return (1);
	{
	return (0);
}
