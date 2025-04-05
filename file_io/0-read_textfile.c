#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* read_textfile - Reads and prints text from a file
* @filename: name of the file to read
* @letters: number of letters to read and print
* Return: number of letters printed or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t read_bytes, written_bytes;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

read_bytes = read(fd, buffer, letters);
if (read_bytes == -1)
{
free(buffer);
close(fd);
return (0);
}

written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
if (written_bytes == -1 || written_bytes != read_bytes)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (written_bytes);
}
