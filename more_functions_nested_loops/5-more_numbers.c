#include "main.h"



/**
* more_numbers - Prints numbers from 0 to 14, ten times.
*
* Description: This function prints the numbers from 0 to 14,
* ten times, followed by a new line each time. The function
* only uses _putchar three times.
*/


void more_numbers(void)
{

int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 10)
{
_putchar('0' + (j / 10));
}
_putchar('0' + (j % 10));
}
_putchar('\n');
}
}
