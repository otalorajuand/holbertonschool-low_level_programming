#include <stdio.h>


/**
 * print_name - prints a name.
 * @name: the name of the person.
 * @f: the function that changes the name of the person.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
	{
		f(name);
	}
}
