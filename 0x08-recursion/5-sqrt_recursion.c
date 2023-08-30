#include <stdio.h>

/**
 * _sqrt_helper - Helper function to guess the square root using recursion.
 * @n: The number for which to calculate the square root.
 * @guess: The current guessed value.
 * Return: The natural square root of the number.
 */
int _sqrt_helper(int n, int guess);
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 * Return: The natural square root of the number.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
/* Negative input, return -1 to indicate an error */
}
return (_sqrt_helper(n, 1)); /* Start guessing from 1 */
}
/**
 * _sqrt_helper - Helper function to guess the square root
 * using recursion.
 * @n: The number for which to calculate the square root.
 * @guess: The current guessed value.
 * Return: The natural square root of the number.
 */
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
{
return (guess); /* Found the square root */
}
else if (guess * guess > n)
{
return (-1); /* The number doesn't have a natural square root */
}
return (_sqrt_helper(n, guess + 1)); /* Guess higher */
}
