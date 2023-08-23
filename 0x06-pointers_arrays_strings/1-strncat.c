#include <stdio.h>

/**
 * _strncat - Concatenates two strings with a maximum of n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be concatenated.
 * @n: Maximum number of bytes from src to be concatenated.
 *
 * Description: This function appends at most n bytes from the src string to
 * the dest string. If src contains n or more bytes, it does not need to be
 * null-terminated. Returns a pointer to the resulting string dest.
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
char *originalDest = dest;
/* Keep a reference to the original dest for returning */

/* Find the end of dest */
while (*dest != '\0')
{
dest++;
}

/* Copy up to n bytes from src to the end of dest */
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

/* Add the terminating null byte */
*dest = '\0';

return (originalDest);
}
