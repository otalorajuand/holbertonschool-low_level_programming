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
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);

	printf("%d", res);
	return (0);
}
