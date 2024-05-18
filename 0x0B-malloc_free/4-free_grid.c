#include "main.h"
/**
 * free_grid - function to free grid
 * @grid: pointer to the 2-D array
 * @height: height of the grid
 *
 * Return: return nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || *grid == NULL || height <= 0)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
