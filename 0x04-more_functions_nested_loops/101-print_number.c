#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
int divisor = 1;
int num = n;
int is_negative = 0;

if (n == 0)
{
_putchar('0');
return;
}

if (n < 0)
{
_putchar('-');
num = -n;
is_negative = 1;
}

while (num / divisor > 9)
divisor *= 10;

while (divisor != 0)
{
_putchar((num / divisor) +'0');
num %= divisor;
divisor /= 10;
}

if (is_negative)
_putchar('-');
}
