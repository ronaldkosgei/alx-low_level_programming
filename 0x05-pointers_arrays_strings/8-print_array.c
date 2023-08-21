#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers,
 * followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
int i; /* Declare the loop variable outside the loop */

if (a == NULL || n <= 0)
return; /* Nothing to print */

for (i = 0; i < n; i++) /* Initialize the loop variable before the loop */
{
printf("%d", a[i]);

if (i != n - 1)
printf(", "); /* Print comma and space if it's not the last element */
}

printf("\n"); /* Print a new line after printing the elements */
}
