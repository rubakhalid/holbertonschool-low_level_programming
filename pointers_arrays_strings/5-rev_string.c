#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * This function takes a pointer to a string and reverses it in place.
 */


void rev_string(char *s)
{
int length = 0;
int i;

for (i = 0; s[i] != '\0'; i++)
{
length++;
}

for (i = 0; i < length / 2; i++)
{

  
char temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
