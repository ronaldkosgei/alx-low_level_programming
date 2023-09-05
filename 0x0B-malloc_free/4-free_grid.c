#include <stdlib.h>

/**
 * free_grid - Frees the memory of a 2D grid previously created by alloc_grid.
 * @grid: The 2D grid to be freed.
 * @height: The number of rows in the grid.
 */
void free_grid(int **grid, int height)
{
int i; /* Declare loop variable here*/
if (grid == NULL)
{
return; /* Nothing to free*/
}
/* Free memory for each row*/
for (i = 0; i < height; i++)
{
free(grid[i]);
}
/* Free memory for the grid itself*/
free(grid);
}
