#include "function_pointers.h"
/**
 * int_index - Finds the index of the first element matching the condition
 * @array: The array of integers
 * @size: The number of elements
 * @cmp: The comparison function
 *
 * Return: Index of the first match, or -1 if none.
 */


int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
