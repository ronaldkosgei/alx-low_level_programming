#include <stdio.h>

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character
 * @str: The input string
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
