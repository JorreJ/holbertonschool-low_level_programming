#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two-dimensional grid
 * previously created by alloc_grid() fuction
 * @grid: two-dimensional grid to free
 * @height: height of the two-dimensional grid
 */

void free_grid(int **grid, int height)
{
int l;
for (l = 0; l < height; l++)
{
free(*(grid + l));
}
free(grid);
}
