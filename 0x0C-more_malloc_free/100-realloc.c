#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - Realloctesca memory
 * @ptr: pointer of the memory previously allocated
 * @old_size: size of allocated space
 * @new_size: new size of new memory block
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *n;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		n = malloc(new_size);
		if (n == NULL)
			return (NULL);

		return (n);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	n = malloc(new_size);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		n[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (n);
}

