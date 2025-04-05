#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * open_source_file - Opens the source file for reading
 * @filename: name of the file to read from
 * Return: file descriptor on success, exits with 98 on failure
 */
int open_source_file(char *filename)
{
int fd = open(filename, O_RDONLY);
if (fd == -1)
{
dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
return (fd);
}

/**
 * open_target_file - Opens or creates the target file for writing
 * @filename: name of the file to write to
 * Return: file descriptor on success, exits with 99 on failure
 */
int open_target_file(char *filename)
{
int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
return (fd);
}

/**
 * close_file - Closes an open file descriptor
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * copy_content - Reads from fd_from and writes to fd_to
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @src: source file name
 * @dest: destination file name
 */
void copy_content(int fd_from, int fd_to, char *src, char *dest)
{
ssize_t rd, wr;
char buffer[BUFFER_SIZE];
while ((rd = read(fd_from, buffer, sizeof(buffer))) > 0)
{
wr = write(fd_to, buffer, rd);
if (wr < 0 || wr != rd)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
close_file(fd_from);
close_file(fd_to);
exit(99);
}
}
if (rd < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
close_file(fd_from);
close_file(fd_to);
exit(98);
}
}

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */
int main(int ac, char **av)
{
int fd_from, fd_to;
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_from = open_source_file(av[1]);
fd_to = open_target_file(av[2]);
copy_content(fd_from, fd_to, av[1], av[2]);
close_file(fd_from);
close_file(fd_to);
return (0);
}
