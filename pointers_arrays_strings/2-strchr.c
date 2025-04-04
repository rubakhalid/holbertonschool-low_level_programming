#include "main.h"
#include <stddef.h>  /* For NULL */

/**
* _strchr - Locates a character in a string
* @s: The string to search
* @c: The character to locate
*
* Return: A pointer to the first occurrence of c in s, or NULL if not found
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')  /* Loop through the string until the null terminator */
{
if (*s == c)  /* If the character matches, return a pointer to it */
{
return (s);
}
s++;  /* Move to the next character */
}

/* If c is the null character, return a pointer to the null terminator */
if (c == '\0')
{
return (s);
}

return (NULL);  /* Character not found, return NULL */
}
