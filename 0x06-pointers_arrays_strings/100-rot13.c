#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
char *start = str;
while (*str != '\0')
{
if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
{
char base = (*str >= 'a' && *str <= 'z') ? 'a' : 'A';
*str = base + (*str - base + 13) % 26;
}
str++;
}
return (start);
}
