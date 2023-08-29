#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix.
 * @a: A pointer to the square matrix of integers.
 * @size: The size of the square matrix (number of rows/columns).
 *
 * Description: This function calculates the sum of the primary diagonal
 * and the sum of the secondary diagonal of the matrix and prints them.
 */
void print_diagsums(int *a, int size)
{
int sum_primary = 0;/* Sum of the primary diagonal */
int sum_secondary = 0;/* Sum of the secondary diagonal */
int i;
for (i = 0; i < size; i++)
{
sum_primary += a[i * size + i];/* Access primary diagonal element */
sum_secondary += a[i * size + (size - 1 - i)];
/* Access secondary diagonal element */
}
printf("Sum of primary diagonal: %d\n", sum_primary);
printf("Sum of secondary diagonal: %d\n", sum_secondary);
}
