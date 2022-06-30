#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First integer
 * @n2: Second integer
 * @r: buffer to store the output
 * @size_: size of the buffer
* Return - The pointer to the result. 
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);
{

	char suma;
	char reminder = '\0'; 
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);
  
	for (int i = len_s1 - 1; i >= 0; i--)
	{
		if (reminder == '\0')
		{
			suma = s1[i] + s2[i] - 48;
		} else
		{
			suma = s1[i] + s2[i] + reminder - 96;
			reminder = '\0';
		}

		if (suma <= '9')
		{
			r[i] = suma;
		} else
		{
			reminder = '1';
			r[i] = suma - 10;
		}
	}
}
