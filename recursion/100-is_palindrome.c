#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - Checks if a string is palindrome.
 * @s: The pointer to the input string.
* Return: Returns 1 if the string is palindrome, and 0 otherwise.
 */

int is_palindrome(char *s);
{
	return (aux_func_palindrome(s, 0, strlen(s) - 1));
}

/**
 * aux_func_palindrome - Checks if the nth and mth character of a string
 * are the same
 * @s: The pointer to the input string.
 * @n: The first position.
 * @m: The last position.
* Return: 1 if the elements are the same, and 0 otherwise.
 */

int aux_func_palindrome(char *s, int n, int m)
{
	int len = strlen(s);

	if (len == 0 || *(s + n) != *(s + m))
	{
		return (0);
	}

	if (n >= m)
	{
		return (1);
	}

	return (aux_func_palindrome(s, n + 1, m - 1));
}
