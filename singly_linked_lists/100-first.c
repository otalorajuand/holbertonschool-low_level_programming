#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * foo - prints a text before the main() is executed.
 * Return: Nothing.
  */

__attribute__((constructor))
void foo(void)
{
	printf("You\'re beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
