#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string (character array)
 *
 * This function takes a string as input and counts the number
 * of characters in the string until the null terminator is reached.
 *
 * Return: The length of the string as an integer.
 */

int _strlen(char *s)
{
int length;

for (length = 0; s[length] != '\0'; length++)
{
}
return (length);
}
