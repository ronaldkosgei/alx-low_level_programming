#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The input string
 */
void puts_half(char *str)
{
int length = strlen(str);
int start;
int i; /* Declare i outside of the loop */

if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2;
}

/* Use the declared i in the loop */
for (i = start; i < length; i++)
{
putchar(str[i]);
}

putchar('\n'); /* Print a new line */
}
