#include "main.h"


/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 *
 * Return: Nothing (void function)
 */

void reverse_array(int *a, int n)
{
int temp, i;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
