#include <stdio.h>

/**
 * is_prime_helper - Helper function to check if a number is prime.
 * @n: The number to check.
 * @divisor: The current divisor being checked.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor);
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1) /* Numbers less than or equal to 1 are not prime */
{
return (0);
}
return (is_prime_helper(n, 2)); /* Start checking divisibility from 2 */
}
/**
 * is_prime_helper - Helper function to check if a number is prime.
 * @n: The number to check.
 * @divisor: The current divisor being checked.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
if (divisor >= n) /* Base case: all divisors checked */
{
return (1); /* n is prime */
}
if (n % divisor == 0) /* Check if n is divisible by the current divisor */
{
return (0); /* n is not prime */
}
return (is_prime_helper(n, divisor + 1));
/* Check next divisor */
}
