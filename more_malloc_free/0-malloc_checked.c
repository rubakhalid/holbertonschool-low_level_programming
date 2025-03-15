#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc
* @b: Number of bytes to allocate
*
* Return: Pointer to allocated memory, or exits with status 98 on failure
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);

return (ptr);
}
