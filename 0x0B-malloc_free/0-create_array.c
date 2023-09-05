#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and
 * initializes it with a specific character.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL if
 * size is 0 or memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i; /* Declare the loop variable before any executable code*/
char *charArray;
if (size == 0)
{
return (NULL); /* Return NULL if size is 0*/
}
charArray = (char *)malloc(sizeof(char) * (size + 1));
/* +1 for the null terminator*/
if (charArray == NULL)
{
return (NULL); /* Return NULL if memory allocation fails*/
}
for (i = 0; i < size; i++)
{
charArray[i] = c; /* Initialize each element with the specified character*/
}
charArray[size] = '\0'; /* Null-terminate the string*/
return (charArray);
}