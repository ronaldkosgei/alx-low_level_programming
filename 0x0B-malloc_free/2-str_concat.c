#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string to concatenate to the first.
 *
 * Return: A newly allocated string containing the concatenated result,
 *         or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
size_t len1, len2, total_len;
char *result;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
total_len = len1 + len2 + 1; /* +1 for the null-terminator*/
result = (char *)malloc(total_len *sizeof(char));
if (result == NULL)
return (NULL);
strcpy(result, s1);
strcat(result, s2);
return (result);
}
