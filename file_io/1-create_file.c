#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
* create_file - Creates a file and writes text in it
* @filename: name of the file
* @text_content: NULL-terminated string to write
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd, written;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
written = write(fd, text_content, strlen(text_content));
if (written == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
