#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Does the operation
 * @argc: arguments counter.
 * @argv: arguments vector.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	char c;
	int (*ptr)(int, int);
	int res;

	if (argc != 4 || argv[1] == NULL || argv[3] == NULL)
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

	if (ptr == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	res = (ptr(a, b));
	printf("%d\n", res);
	return (EXIT_SUCCESS);
}
