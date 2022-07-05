#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: arguments counter.
 * @argv: arguments vector.
* Return: Nothing
 */

int main(int argc, char *argv[])
{
	if (argc != 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
