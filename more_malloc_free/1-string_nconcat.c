#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings up to n bytes of s2
* @s1: The first string
* @s2: The second string
* @n: The maximum number of bytes from s2 to concatenate
*
* Return: Pointer to newly allocated memory with concatenated string
*         NULL if allocation fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *new_str;

/* Handle NULL inputs as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate lengths of s1 and s2 */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

/* If n is greater than or equal to s2 length, use full s2 */
if (n >= len2)
n = len2;

/* Allocate memory for new string (+1 for null terminator) */
new_str = malloc(sizeof(char) * (len1 + n + 1));
if (new_str == NULL)
return (NULL);

/* Copy s1 into new string */
for (i = 0; i < len1; i++)
new_str[i] = s1[i];

/* Copy up to n characters of s2 */
for (j = 0; j < n; j++)
new_str[i + j] = s2[j];

/* Null-terminate the new string */
new_str[i + j] = '\0';

return (new_str);
}
