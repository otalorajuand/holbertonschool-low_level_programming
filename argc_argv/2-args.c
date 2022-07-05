#include <stdio.h>

/**
 * main - prints the function arguments
 * @argc: arguments counter.
 * @argv: arguments vector.
* Return: prints the number of arguments
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
