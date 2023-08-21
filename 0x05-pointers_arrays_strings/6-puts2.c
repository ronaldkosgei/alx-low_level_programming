#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character
 * @str: The input string
 *
 * Description: This function takes a string as input and prints every other character,
 *              starting with the first character, followed by a new line.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i += 2; /* Increment by 2 to skip every other character */
}

putchar('\n'); /* Print a new line */
}
