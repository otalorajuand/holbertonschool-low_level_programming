#include <stdio.h>

/**
 * main - prints the function arguments
 * @argc: arguments counter.
 * @argv: arguments vector.
* Return: prints the number of arguments
 */

int main(int argc, char *argv[])
{
	int cero_ascii = 48;
	int num1 = *argv[1] - cero_ascii;
	int num2 = *argv[2] - cero_ascii;
	int mult = num1 * num2;

	if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", mult);
	printf("%d\n", num1);
	printf("%d\n", num2);
	return (0);
}
