#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * malloc_checked - Returns a pointer with certain memory
 * @b: the number of bytes to allocate
* Return: The pointer with the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
		exit(98);
}
