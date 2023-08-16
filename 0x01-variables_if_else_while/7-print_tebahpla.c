#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse,
 * followed by a new line, using putchar only twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 25; i >= 0; i--)
putchar('a' + i);

putchar('\n');

return (0);
}
