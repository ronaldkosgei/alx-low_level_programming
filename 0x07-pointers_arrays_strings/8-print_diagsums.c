#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
int primary_sum = 0;
int secondary_sum = 0;
int i; /* Declare the loop counter outside the loop*/
for (i = 0; i < size; i++)
{
primary_sum += a[i * size + i];
secondary_sum += a[i * size + (size - 1 - i)];
}
printf("%d\n", primary_sum);
printf("%d\n", secondary_sum);
}
