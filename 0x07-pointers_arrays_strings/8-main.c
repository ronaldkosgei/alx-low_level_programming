#include "main.h"
#include <stdio.h>

/**
 * sum_of_diagonals - Calculates and prints the sum of the
 * diagonals of a square matrix.
 * @matrix: The square matrix.
 * @n: The size of the matrix.
 */
void sum_of_diagonals(int matrix[][3], int n); /* Function prototype*/
/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
int matrix[3][3] = {
{1, 2, 3},
{4, 5, 6},
{7, 8, 9}
};
int n = 3;/*Size of the square matrix*/
sum_of_diagonals(matrix, n);
return (0);
}
