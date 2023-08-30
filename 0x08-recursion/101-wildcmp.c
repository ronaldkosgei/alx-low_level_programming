#include <stdio.h>

/**
 * wildcmp - Compares two strings considering the special character '*'.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * Return: 1 if strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2);
/**
 * wildcmp - Compares two strings considering the special character '*'.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * Return: 1 if strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
/* If both strings are empty, they are identical */
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
/* If the current characters match or s2 has a wildcard '*' */
if (*s1 == *s2 || *s2 == '*')
{
/* Recur with the next characters */
return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1));
}
return (0); /* Strings are not identical */
}
