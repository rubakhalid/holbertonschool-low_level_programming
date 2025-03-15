#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Pointer to the dog's name (string)
 * @age: Age of the dog (float)
 * @owner: Pointer to the owner's name (string)
 *
 * Description: This function assigns the given values to the
 * respective members of the struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
