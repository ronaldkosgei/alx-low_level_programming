#include <unistd.h>

int _putchar(char c);

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
int divisor = 1;
int num = n;

if (n < 0)
{
_putchar('-');
num = -num;
}

while (num / divisor > 9)
divisor *= 10;

while (divisor != 0)
{
_putchar(num / divisor + '0');
num %= divisor;
divisor /= 10;
}
}
