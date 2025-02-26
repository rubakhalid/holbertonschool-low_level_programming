#include "main.h"


/**
 * puts2 - Prints every other character of a string
 * @str: The input string.
 *
 * Return: Nothing (void).
 */


void puts2(char *str)
{
int length = 0;
int i;

while (str[length] != '\0')
{
length++;
}

for (i = 0; i < length; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
