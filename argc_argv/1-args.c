#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: arguments counter.
 * @argv: arguments vector.
* Return: prints the number of arguments
 */

int main(int argc, char *argv[])
{
	if (*argv[0] != '\0')
	{
		printf("%d\n", argc);
	}
	return (0);
}
