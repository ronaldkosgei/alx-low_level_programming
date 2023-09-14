#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with a copy of name and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the newly created dog. NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner) {
dog_t *new_dog;
/* Allocate memory for the new dog */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL); /* Return NULL if memory allocation fails */
}
/* Allocate memory and copy the name string */
new_dog->name = malloc(strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog); /* Free previously allocated memory */
return (NULL);
}
strcpy(new_dog->name, name);
/* Allocate memory and copy the owner string */
new_dog->owner = malloc(strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name); /* Free previously allocated memory */
free(new_dog);
return (NULL);
}
strcpy(new_dog->owner, owner);
new_dog->age = age; /* Set the age of the new dog */
return (new_dog);
}
