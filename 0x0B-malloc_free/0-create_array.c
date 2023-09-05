#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and
 * initializes it with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL
 * if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
/* Allocate memory for the array*/
array = (char *)malloc(size * sizeof(char));
/* No extra byte for null-terminator*/
if (array == NULL)
return (NULL);
/* Initialize the array with the specified character*/
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
