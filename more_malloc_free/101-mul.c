#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: The arguments counter.
 * @argv: The arguments vector.
* Return: The results of the multiplication
 */


int main(int argc, char *argv[])
{
	long res;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	res = atoi(argv[1]) * atoi(argv[2]);

	printf("%ld", res);
	return (0);
}
