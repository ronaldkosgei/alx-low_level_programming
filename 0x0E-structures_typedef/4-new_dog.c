#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * 
 * Return: Pointer to the new dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
/* Allocate memory for the new dog structure */
new_dog = malloc(sizeof(dog_t));
/* Check if memory allocation was successful */
if (new_dog == NULL)
{
return (NULL); /* Return NULL on allocation failure */
}
/* Allocate memory for the name and owner strings */
new_dog->name = strdup(name);
new_dog->owner = strdup(owner);
/* Check if string duplication was successful */
if (new_dog->name == NULL || new_dog->owner == NULL)
{
/* Free allocated memory in case of failure and return NULL */
free(new_dog->name);
free(new_dog->owner);
free(new_dog);
return (NULL);
}
new_dog->age = age; /* Set the age of the new dog */
return (new_dog); /* Return pointer to the new dog structure */
}
