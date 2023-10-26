#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_bit - a function to returns a value of a given index
 * @index:  the value of the bit
 * @n: number of checks
 * Return: value at given index or -1 if an error occours
 */
int get_bit(unsigned long int n, unsigned int index)

{
	unsigned int x;

	if (index > (sizeof(8) * 8))
		return (-1);

	for (x = 0; x < index; x++)
		n = n >> 1;
	return ((n & 1));
}
