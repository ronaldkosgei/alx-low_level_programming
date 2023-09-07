#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocate and zero-initialize memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size in bytes of each element
 *
 * Return: A pointer to the allocated and initialized memory
 *         NULL if nmemb or size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
/* Check if nmemb or size is 0*/
if (nmemb == 0 || size == 0)
{
return (NULL);
}
/* Allocate memory using malloc*/
ptr = malloc(nmemb * size);
/* Check if memory allocation was successful*/
if (ptr == NULL)
{
return (NULL); /* malloc failed, return NULL*/
}
/* Use memset to set the allocated memory to zero*/
memset(ptr, 0, nmemb * size);
return (ptr);
}
