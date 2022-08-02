#include "main.h"

/**
  * main - a program that copies the content of a file to another file
  * @argc: arguments count.
  * @argv: arguments vector.
 * Return: 1 if works.
  */

int main(int argc, char *argv[])
{
	char c;
	FILE *file1, *file2;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file1 = fopen(argv[1], "r");

	if (file1 == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	
	file2 = fopen(argv[2], "w");

	if (file2 == NULL)
	{
		fclose(file1);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((c = fgetc(file1)) != EOF)
		fputc(c, file2);

	fclose(file1);
	fclose(file2);
	return (1);
}
