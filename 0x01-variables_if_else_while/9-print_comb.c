#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of single-digit
 * numbers, separated by ', ', in ascending order, using putchar only four times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
putchar('0' + n);
if (n < 9)
{
if (n != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
