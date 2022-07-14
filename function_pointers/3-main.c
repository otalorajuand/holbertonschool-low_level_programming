#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Does the operation
 * arc: arguments counter.
 * argv: arguments vector.
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	char c;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = *argv[2];
	
	if ((c == '/' || c == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	return (ptr(a, b));

}
