#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - a fuction to sets the value of a bit to 1 at a given index
 * @index: is an index  to replace in the number
 * @n: number of times to check the bit
 * Return: 1 if it work or -1 if an error occurr
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned int value;

	if (index > sizeof(unsigned int) * 16)
		return (-1);
	value = 1;
	value = value << index;
	*n = ((*n) | value);
	return (1);
}
