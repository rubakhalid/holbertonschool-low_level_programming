#include "main.h"

/**
* helper - Recursive function to check if a string is a palindrome
* @s: The string to check
* @start: The starting index
* @end: The ending index
*
* Return: 1 if palindrome, 0 if not
*/
int helper(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);

return (helper(s, start + 1, end - 1));
}

/**
* is_palindrome - Checks if a string is a palindrome
* @s: The string to check
*
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
int length = 0; 

if (*s == '\0')
return (1);

while (s[length] != '\0')
length++;

return (helper(s, 0, length - 1));
}
