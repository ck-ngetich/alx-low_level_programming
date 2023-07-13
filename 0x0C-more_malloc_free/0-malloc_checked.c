#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates the memory
 * @b: the size of memory to be allocated
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
