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
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(EXIT_FAILURE);
/* Use the portable EXIT_FAILURE macro*/
}
return (ptr);
}
