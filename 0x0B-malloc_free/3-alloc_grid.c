#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - converts a pointer to a 2 dimensional array
 * @width: first dimensional array
 * @height: second dimensional array
 * Return: NULL if zero or negative,else array
 */
int **alloc_grid(int width, int height)
{
	int x, y, z, m;
	int **i;

	if (width <= 0 || height <= 0)
		return (NULL);
	i = malloc(sizeof(int *) * height);
	if (i == NULL)
	{
		free(i);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		i[x] = malloc(sizeof(int) * width);

		if (i[x] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(i[y]);
			}
			free(i);
			return (NULL);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (m = 0; m < width; m++)
		{
			i[z][m] = 0;
		}
	}
	return (i);
}
