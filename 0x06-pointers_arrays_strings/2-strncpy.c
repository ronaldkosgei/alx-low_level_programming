#include <stdio.h>

/**
 * _strncpy - Copies up to n bytes of a string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be copied.
 * @n: Maximum number of bytes to be copied.
 *
 * Description: This function copies up to n bytes from the src string
 * to the dest string. If src contains n or more bytes, the remaining
 * bytes in dest are filled with null bytes. Returns a pointer to the
 * resulting string dest.
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
char *originalDest = dest;
/* Keep a reference to the original dest for returning */
/* Copy up to n bytes from src to dest */
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
/* Fill remaining bytes in dest with null bytes if necessary */
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (originalDest);
}
