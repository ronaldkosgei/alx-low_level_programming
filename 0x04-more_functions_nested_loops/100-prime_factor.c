#include <stdio.h>
#include <math.h>

/**
 * is_prime - Check if a number is prime
 * @num: The number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(long num)
{
if (num <= 1)
return 0;
if (num <= 3)
return 1;

if (num % 2 == 0 || num % 3 == 0)
return 0;

for (long i = 5; i * i <= num; i += 6)
{
if (num % i == 0 || num % (i + 2) == 0)
return 0;
}

return 1;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long num = 612852475143;
long largest_prime_factor = 2;

while (num > 1)
{
if (num % largest_prime_factor == 0)
{
num /= largest_prime_factor;
}
else
{
largest_prime_factor++;
while (!is_prime(largest_prime_factor))
largest_prime_factor++;
}
}

printf("%ld\n", largest_prime_factor);
return (0);
}
