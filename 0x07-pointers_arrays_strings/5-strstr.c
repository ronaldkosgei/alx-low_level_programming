#include <stddef.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: A pointer to the string to search in.
 * @needle: A pointer to the substring to search for.
 *
 * Return: A pointer to the beginning of the located
 * substring within @haystack,or NULL if the substring
 * is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
/* Compare characters in both @haystack and @needle */
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
/* If the entire @needle is found, return pointer to the beginning */
if (*n == '\0')
{
return (haystack);
}
haystack++;/* Move to the next character in @haystack */
}
/* Substring not found in @haystack */
return (NULL);
}
