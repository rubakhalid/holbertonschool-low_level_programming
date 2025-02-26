#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
* @dest: The destination buffer where the string is to be copied.
* @src: The source string to be copied.
*
* Return: A pointer to dest.
*/

char *_strcpy(char *dest, char *src)

{

int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

dest[i] = '\0';

return (dest);
}
