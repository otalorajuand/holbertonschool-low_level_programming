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
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	
	if ((argv[2] == '/' || argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	int (*ptr)(char *c);

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	return (ptr(a, b));

}
