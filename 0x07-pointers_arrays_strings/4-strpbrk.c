#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: A pointer to the string to search in.
 * @accept: A pointer to the set of bytes to search for.
 *
 * Return: A pointer to the byte in @s that matches one of the bytes in @accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *curr_accept = accept;
while (*curr_accept != '\0')
{
if (*s == *curr_accept)
{
return (s);/* Return pointer to the matching byte*/
}
curr_accept++;
}
s++;
}
return (NULL);/* No matching byte found*/
}
