#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The input string to be printed
 *
 * Return: Nothing (void)
 */

void puts_half(char *str)
{

int lenght, start, i;


for (lenght = 0; str[lenght] != '\0'; lenght++)
{
if (lenght % 2 == 0)
start = lenght / 2;
else
start = (lenght + 1) / 2;
}

for (i = start; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
