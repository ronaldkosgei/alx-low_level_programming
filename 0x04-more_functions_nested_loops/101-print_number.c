#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
if (n < 0)

_putchar('-');
n = -n;
}

if (n / 10)
print_number(n / 10);

_putchar((n % 10) + '0');
}
