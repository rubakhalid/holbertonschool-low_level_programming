#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog
 * @d: Pointer to a dog_t structure
 *
 * Description: This function frees the memory allocated for a dog,
* including the memory for its name and owner.
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);   /* Free the memory for name */
free(d->owner);  /* Free the memory for owner */
free(d);         /* Finally, free the memory for the dog structure itself */
}
}
