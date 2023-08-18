#include "main.h"

/**
 * print_line - Prints a line of underscores of a given length
 * @n: The length of the line
 */
void print_line(int n)
{
int i; /* Declare the loop variable outside the loop */

if (n <= 0)
{
_putchar('\n'); /* Print a newline for non-positive lengths */
return;
}

for (i = 0; i < n; i++) /* Move the loop variable declaration here */
{
_putchar('_'); /* Print an underscore character */
}

_putchar('\n'); /* Print a newline character */
}
