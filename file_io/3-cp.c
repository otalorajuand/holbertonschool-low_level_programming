#include "main.h"

/**
  * main - a program that copies the content of a file to another file
  * @argc: arguments count.
  * @argv: arguments vector.
 * Return: 1 if works.
  */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int file1, file2, len_f1 = 1, close_fd, write_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (len_f1 != 0)
	{
		len_f1 = read(file1, buffer, sizeof(buffer));
		write_fd = write(file2, buffer, len_f1);
		if (file2 == -1 || write_fd == -1)
		{
			close(file1);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_fd = close(file1);
	if (close_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file1);
		exit(100);
	}
	close_fd = close(file2);
	if (close_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file2);
		exit(100);
	}
	return (1);
}
