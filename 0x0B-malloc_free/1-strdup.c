#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a new string that is a duplicate of the
 *           input string.
 * @str: The input string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if memory allocation
 * fails or if the input string is NULL.
 */
char *_strdup(char *str)
{
size_t len;
char *duplicate;
if (str == NULL)
return (NULL);
/* Calculate the length of the input string*/
len = strlen(str);
/* Allocate memory for the duplicated string (including the null-terminator)*/
duplicate = (char *)malloc((len + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);
/* Copy the input string into the duplicated memory*/
strcpy(duplicate, str);
return (duplicate);
}
