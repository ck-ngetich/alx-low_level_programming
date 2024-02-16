#include <stddef.h>
#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to new Hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	unsigned long int x;

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);

	tab->size = size;
	tab->array = malloc(sizeof(hash_node_t *) * size);
	if (tab->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		tab->array[x] = NULL;

	return (tab);
}
