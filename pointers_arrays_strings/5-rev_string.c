#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * This function takes a pointer to a string and reverses it in place.
 */


void rev_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
}

for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
