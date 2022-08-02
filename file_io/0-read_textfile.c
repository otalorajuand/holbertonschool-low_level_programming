#include "main.h"


/**
  * read_textfile - reads a text file and prints it to the POSIX standard
  * output
  * @filename: The name of the file.
  * @letters: he number of letters it should read and print
 * Return: the actual number of letters it could read and print.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, res;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);

	if (buffer == NULL)
		return (0);

	res = read(fd, buffer, letters);
	buffer[letters] = '\0';

	close(fd);

	dprintf(STDOUT_FILENO, "%s", buffer);
	return (res);
}
