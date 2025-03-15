#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array and initializes it to zero
* @nmemb: Number of elements
* @size: Size of each element in bytes
*
* Return: Pointer to allocated memory, or NULL if allocation fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;

/* If nmemb or size is 0, return NULL */
if (nmemb == 0 || size == 0)
return (NULL);

/* Allocate memory for nmemb elements, each of size bytes */
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

/* Initialize allocated memory to zero */
for (i = 0; i < (nmemb * size); i++)
ptr[i] = 0;

return (ptr);
}
