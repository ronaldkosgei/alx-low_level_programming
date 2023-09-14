#include <stdio.h>
#include <stdlib.h>

/* Define the 'struct dog' type*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * init_dog - Initializes a 'struct dog' with the provided values.
 * @d: Pointer to the 'struct dog' to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function initializes a 'struct dog' with the provided
 * name, age, and owner values. If 'd' is NULL, no initialization is performed.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
struct dog new_dog;
/* Allocate memory for the 'name' and 'owner' strings and copy the values*/
new_dog.name = strdup(name);
new_dog.age = age;
new_dog.owner = strdup(owner);
return (new_dog);
}
/* Function to free memory allocated for 'struct dog' variable*/
void free_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
free(d->name);
free(d->owner);
}
