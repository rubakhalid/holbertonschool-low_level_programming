#include "main.h"

/**
* print_alphabet - Prints the lowercase alphabet followed by a new line
*
* Description: This function prints the English alphabet in lowercase,
*              followed by a new line. It uses the _putchar function
*              to print each character.
*/

void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}

_putchar('\n');
}
