#include <stdio.h>

/**
 * print_chessboard - Prints the given chessboard.
 * @a: A pointer to a 2D array representing the chessboard.
 *
 * Description: This function prints the contents of the chessboard
 * using characters from the provided 2D array.
 */
void print_chessboard(char (*a)[8])
{
int row, col;
for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
{
/* Print the character at the current position */
printf("%c", a[row][col]);
}
/* Move to the next line for the next row */
printf("\n");
}
}
