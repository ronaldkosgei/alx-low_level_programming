#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0'); /* Convert integer to character and print */
}
}

_putchar('\n'); /* Print a newline character */
}
