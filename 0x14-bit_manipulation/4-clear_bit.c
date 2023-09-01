#include "main.h"
#include <stdio.h>
/**
 * clear_bit - function to set the value of a bit to 0 at a given index
 * @index: index of the bit starting from 0
 * @n: number of sets
 * Return: 1 if it work, or -1 if an error occurr
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int value;

	value = 1;
	value = value << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = value ^ *n;

	return (1);
}
