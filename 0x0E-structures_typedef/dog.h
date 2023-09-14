#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct representing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}
dog_t;
/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
/* Add any other function prototypes here */

#endif /* DOG_H */
