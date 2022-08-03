#include "main.h"

/**
  * main - a program that copies the content of a file to another file
  * @argc: arguments count.
  * @argv: arguments vector.
 * Return: 1 if works.
  */

int main(int argc, char *argv[])
{
	char *buffer;
	int file1, file2, buff_size, len_f1;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file1 = open(argv[1], O_RDONLY);

	if (file1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file2 == -1)
	{
		close(file1);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buff_size = 1024;
	buffer = malloc(sizeof(char) * buff_size);
	len_f1 = read(file1, buffer, buff_size);

	write(file2, buffer, len_f1);

	close(file1);
	close(file2);

	return (1);
}
