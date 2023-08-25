#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
char *start = str;
int i;
while (*str)
{
if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
{
for (i = 0; i < 13; i++)
{
if ((*str >= 'z' && *str != 'Z') || *str == 'Z')
*str -= 25;
else
(*str)++;
}
}
str++;
}
return (start);
}
