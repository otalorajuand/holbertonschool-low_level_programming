#include "main.h"


int main(int argc, char *argv[])
{
        char buffer[BUFSIZ];
        int file1, file2, len_f1 = BUFSIZ, close_fd, write_fd;

        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }
        file1 = open(argv[1], O_RDONLY);
        file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
        /* missing check error conditions */

        while (len_f1 == BUFSIZ)
        {
                len_f1 = read(file1, buffer, BUFSIZ);
                if (len_f1 == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                        exit(98);
                }
                write_fd = write(file2, buffer, len_f1);
                if (write_fd == -1)
                {
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
        return (0);
}
