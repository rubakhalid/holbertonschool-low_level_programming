#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to struct dog
 *
 * Description: Prints the name, age, and owner of the dog.
 * If any element is NULL, it prints "(nil)" instead.
 * If d is NULL, the function does nothing.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
