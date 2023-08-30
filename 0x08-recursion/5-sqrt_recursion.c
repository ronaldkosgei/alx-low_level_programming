#include <stdio.h>

/**
 * _sqrt_helper - Helper function to find the square root using binary search.
 * @n: The number for which to calculate the square root.
 * @start: The lower bound of the binary search range.
 * @end: The upper bound of the binary search range.
 * Return: The square root of the number.
 */
int _sqrt_helper(int n, int start, int end);

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
}
if (n == 0 || n == 1)
{
return (n);
}
return (_sqrt_helper(n, 1, n));
}
/**
 * _sqrt_helper - Helper function to find the square root
 * using binary search.
 * @n: The number for which to calculate the square root.
 * @start: The lower bound of the binary search range.
 * @end: The upper bound of the binary search range.
 * Return: The square root of the number.
 */
int _sqrt_helper(int n, int start, int end)
{
int mid = start + (end - start) / 2;
if (start > end)
{
return (-1);
}
if (mid * mid == n)
{
return (mid);
}
else if (mid * mid > n)
{
return (_sqrt_helper(n, start, mid - 1));
}
else
{
return (_sqrt_helper(n, mid + 1, end));
}
}
