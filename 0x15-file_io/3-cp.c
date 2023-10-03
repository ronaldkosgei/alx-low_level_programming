#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
int file_from, file_to;
ssize_t read_bytes, write_bytes;
char buffer[BUFFER_SIZE];
mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
return (97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
return (98);
}
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_from);
return (99);
}
while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
write_bytes = write(file_to, buffer, read_bytes);
if (write_bytes != read_bytes)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_from);
close(file_to);
return (99);
}
}
if (read_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(file_from);
close(file_to);
return (98);
}
if (close(file_from) == -1 || close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close(file_from) == -1) ? file_from : file_to);
return (100);
}
return (0);
}
