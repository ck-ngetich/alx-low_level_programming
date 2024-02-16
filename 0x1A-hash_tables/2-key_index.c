#include <stddef.h>
#include "hash_tables.h"

/**
 * key_index - function that generates index of array
 * @key: key present
 * @size: size of array of the hash tables
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
