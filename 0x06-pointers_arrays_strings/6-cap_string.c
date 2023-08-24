#include <stdio.h>
#include <stdbool.h>

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to check.
 * Return: true if c is a separator, false otherwise
 *
 */
bool is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;  /* Declare i before the loop */
for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return (true);
}
}
return (false);
}
/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the input string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
bool new_word = true;
int i;/* Declare i before the loop */
for (i = 0; str[i] != '\0'; i++)
{
if (is_separator(str[i]))
{
new_word = true;
}
else if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - 'a' + 'A';
new_word = false;
}
else
{
new_word = false;
}
}
return (str);
}
