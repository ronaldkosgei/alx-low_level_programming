#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 * of two digits, separated by ', ', in ascending order,
 * using putchar only five times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int tens, ones;

for (tens = 0; tens < 10; tens++)
{
for (ones = tens + 1; ones < 10; ones++)
{
putchar('0' + tens);
putchar('0' + ones);

if (tens != 8 || ones != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
