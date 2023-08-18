#include "main.h"

/**
 * print_diagonal - Prints a diagonal line using
 * backslashes of a given length
 * @n: The length of the diagonal line
 */
void print_diagonal(int n)
{
int i; /* Declare the loop variable outside the loop */
int spaces;

if (n <= 0)
{
_putchar('\n'); /* Print a newline for non-positive lengths */
return;
}

for (i = 0; i < n; i++) /* Move the loop variable declaration here */
{
for (spaces = 0; spaces < i; spaces++)
{
_putchar(' '); /* Print space characters before the backslashes */
}

_putchar('\\'); /* Print a backslash character */
_putchar('\n'); /* Print a newline character */
}
}
