#include <stdio.h>

/**
 * leet - Encodes a string into 1337 speak.
 * @str: Pointer to the input string.
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
char leet_map[] = "aAeEoOtTlL";
char leet_replacements[] = "4433007711";
for (int i = 0; str[i] != '\0'; i++)
{
for (int j = 0; leet_map[j] != '\0'; j++)
{
if (str[i] == leet_map[j])
{
str[i] = leet_replacements[j];
break; /* No need to continue searching */
}
}
}
return (str);
}
/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
char text[] = "Hello, World! This is a Test String.";
printf("Original: %s\n", text);
char *result = leet(text);
printf("1337 Speak: %s\n", result);
return (0);
}
