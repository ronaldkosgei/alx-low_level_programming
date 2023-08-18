#include <stdio.h>
#include <math.h>

/**
 * is_prime - Checks if a number is prime
 * @num: The number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(long num)
{
long i;

if (num <= 1)
return (0);
if (num <= 3)
return (1);

for (i = 5; i * i <= num; i += 6)
{
if (num % i == 0 || num % (i + 2) == 0)
return (0);
}

return (1);
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
long i;

while (num % 2 == 0)
{
num /= 2;
}

for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0 && is_prime(i))
{
largest_prime_factor = i;
num /= i;
}
}

if (num > 2 && is_prime(num))
largest_prime_factor = num;

printf("%ld\n", largest_prime_factor);
return (0);
}
