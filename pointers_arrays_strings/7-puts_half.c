#include "main.h"
#include <stdio.h>


/**
 * puts_half - Prints half of a string
 * @str: The input string.
 *
 * Return: Nothing (void).
 */

void puts_half(char *str)
{
int length = 0;
int start, i;

while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length + 1) / 2;
}

for (i = start; str[i] != '\0'; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
