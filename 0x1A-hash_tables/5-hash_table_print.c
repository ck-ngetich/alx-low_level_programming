#include <stddef.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: pointer to the hash table
 * Return: NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *tmp;
	char *split;

	if (ht == NULL)
		return;

	printf("{");
	split = "";

	for (x = 0; x < ht->size; x++)
	{
		tmp = ht->array[x];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", split, tmp->key, tmp->value);
			split = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
