#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
int divisor = 1;
if (n < 0) {
_putchar('-');
n = -n;
}
/* Calculate the divisor*/
while (n / divisor >= 10)
{
divisor *= 10;
}
/* Print each digit*/
while (divisor > 0)
{
_putchar((n / divisor) +'0');
n %= divisor;
divisor /= 10;
}
}
