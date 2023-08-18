#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line.
 */
void print_numbers(void)
{
char num;

for (num = '0'; num <= '9'; num++)
{
_putchar(num); /* Print the current digit character */
}

_putchar('\n'); /* Print a newline character at the end */
}
