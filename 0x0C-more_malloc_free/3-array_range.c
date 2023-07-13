#include "main.h"
#include <stdlib.h>

/**
 * array_range - functions that creates an array of integers
 * @min: lowest value to begin
 * @max: highest value to end
 * Return: pointer of newly created array
 */
int *array_range(int min, int max)
{
	int *i, x = 0;

	if (min > max)
		return (NULL);

	i = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (i == NULL)
		return (NULL);
	while (min <= max)
	{
		i[x] = min;
		x++;
		min++;
	}
	return (i);
}
