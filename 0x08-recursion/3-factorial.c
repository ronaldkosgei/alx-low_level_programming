#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 * Return: The factorial of the number.
 */
int factorial(int n)
{
if (n < 0) /* Check for error case (negative input) */
{
return (-1);
}
if (n == 0) /* Base case: factorial of 0 is 1 */
{
return (1);
}
return (n * factorial(n - 1));
/* Recursive call with decrementing n */
}
