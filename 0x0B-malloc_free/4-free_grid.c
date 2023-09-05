#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D grid of integers.
 * @rows: The number of rows in the grid.
 * @cols: The number of columns in the grid.
 *
 * Return: A pointer to the allocated grid, or NULL if allocation fails.
 */
int **alloc_grid(int rows, int cols)
{
int **grid = (int **)malloc(rows * sizeof(int *));
 int i, j; /* Declare loop variables here*/
if (grid == NULL)
{
return (NULL); /* Allocation failed*/
}
for (i = 0; i < rows; i++)
{
grid[i] = (int *)malloc(cols * sizeof(int));
if (grid[i] == NULL)
{
/* Allocation for a row failed, clean up previously allocated memory*/
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL); /* Allocation failed*/
}
}
return (grid);
}
/**
 * free_grid - Frees the memory of a 2D grid previously created by alloc_grid.
 * @grid: The 2D grid to be freed.
 * @height: The number of rows in the grid.
 */
void free_grid(int **grid, int height)
{
if (grid == NULL)
{
return; /* Nothing to free*/
}
int i; /* Declare loop variable here*/
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
