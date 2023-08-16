#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 * of three digits, separated by ', ', in ascending order,
 * using putchar only six times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int hundreds, tens, ones;

for (hundreds = 0; hundreds < 8; hundreds++)
{
for (tens = hundreds + 1; tens < 9; tens++)
{
for (ones = tens + 1; ones < 10; ones++)
{
putchar('0' + hundreds);
putchar('0' + tens);
putchar('0' + ones);

if (hundreds != 7 || tens != 8 || ones != 9)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
