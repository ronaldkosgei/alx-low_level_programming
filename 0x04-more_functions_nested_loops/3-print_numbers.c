#include "main.h"

int _putchar(char c);

/**
 * print_numbers - Prints numbers from 0 to 9
 */
void print_numbers(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
_putchar(digit);
}

_putchar('\n');
}
