#include <stddef.h>
/**
 * _strchr - Locates a character in a string.
 * @s: A pointer to the string to search in.
 * @c: The character to search for.
 *
 * Return: A pointer to the first occurrence of the character @c in the
 *         string @s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
/* Character found, return pointer to its location */
return (s);
}
s++;/* Move to the next character in the string */
}
/* If c is '\0', return pointer to the null terminator */
if (c == '\0')
{
return (s);
}
/* Character c not found in the string */
return (NULL);
}
