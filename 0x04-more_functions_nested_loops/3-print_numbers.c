#include "main.h"

int _putchar(char c);

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
_putchar(i + '0'); /* Convert integer to character and print */
}

_putchar('\n'); /* Print a newline character */
}
