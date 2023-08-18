#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle pattern using hashtags
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n'); /* Print a newline for non-positive sizes */
return;
}

for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
{
_putchar(' '); /* Print spaces for alignment */
}

for (j = 1; j <= i; j++)
{
_putchar('#'); /* Print hashtags */
}

_putchar('\n'); /* Move to the next line after each row */
}
}
