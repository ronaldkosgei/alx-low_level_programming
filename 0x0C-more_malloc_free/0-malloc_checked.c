#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc and check for success
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         Exits with status value 98 if allocation fails
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
/* Allocate memory using malloc */
ptr = malloc(b);
/* Check if memory allocation was successful */
if (ptr == NULL)
{
fprintf(stderr, "Memory allocation failed.\n");
exit(98);
/* Terminate the process with status value 98 */
}
return (ptr);
}
