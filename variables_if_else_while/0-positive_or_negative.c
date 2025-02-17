#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: This program assigns a random number to the variable n
* and prints whether it is positive, negative, or zero.
*
* Return: Always 0 (Success)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d is %s\n", n, (n > 0) ? "positive" : (n == 0) ? "zero" : "negative");

return (0);
}
