#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of arguments
 * @argc: arguments counter.
 * @argv: arguments vector.
* Return: prints the number of arguments
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int mult = num1 * num2;
	printf("%d\n", mult);
	return (0);
}
