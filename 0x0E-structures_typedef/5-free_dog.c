#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to free.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name); /* Free memory for the name string */
free(d->owner); /* Free memory for the owner string */
free(d); /* Free memory for the dog structure itself */
}
}
