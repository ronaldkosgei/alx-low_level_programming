#include "main.h"

/**
 * _strcpy - Copy a string including the null terminator.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;

/* Copy characters from src to dest until null terminator is encountered */
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0'; /* Append null terminator */

return (original_dest);
}
