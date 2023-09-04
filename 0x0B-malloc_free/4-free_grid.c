#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees the allocated memory of a 2D array.
  * @grid: the 2D array.
  * @height: the size of the 2D array.
  */
void	free_grid(int **grid, int height)
{
	int	i;

	i = 0;
	while (i < height)
		free(grid[i++]);
	free(grid);
}
