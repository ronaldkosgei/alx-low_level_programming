#include <stdio.h>

/**
 * sum_of_diagonals - Calculates and prints the sum of
 * the diagonals of a square matrix.
 * @matrix: The square matrix.
 * @n: The size of the matrix.
 */
void sum_of_diagonals(int matrix[][3], int n)
{
int primary_sum = 0;
int secondary_sum = 0;
int i;
for (i = 0; i < n; i++)
{
primary_sum += matrix[i][i];
secondary_sum += matrix[i][n - 1 - i];
}
printf("Sum of primary diagonal: %d\n", primary_sum);
printf("Sum of secondary diagonal: %d\n", secondary_sum);
}
