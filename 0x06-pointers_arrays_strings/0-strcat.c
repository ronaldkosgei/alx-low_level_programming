#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be concatenated.
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte. It returns a pointer to the resulting
 * string dest.
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strcat(char *dest, const char *src)
{
char *originalDest = dest;
/* Keep a reference to the original dest for returning */

/* Find the end of dest */
while (*dest != '\0')
{
dest++;
}

/* Copy characters from src to the end of dest */
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

/* Add the terminating null byte */
*dest = '\0';

return (originalDest);
}
