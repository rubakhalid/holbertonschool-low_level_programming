#include "main.h"


/**
 * print_rev - Prints a string in reverse using a single for loop
 * @s: The string to be printed in reverse
 */

void print_rev(char *s)
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
