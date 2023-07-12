#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 dim arrays previously created
 * @grid: array created
 * @height: array used
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int x;
	
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
