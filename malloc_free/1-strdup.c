#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicates a string in a newly allocated memory space
* @str: the string to duplicate
*
* Return: pointer to the duplicated string, or NULL if memory allocation fails
*/
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

dup = malloc((len + 1) * sizeof(char));

if (dup == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dup[i] = str[i];

return (dup);
}
