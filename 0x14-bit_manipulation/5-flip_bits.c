#include "main.h"
#include <stdio.h>
/**
 * flip_bits - Returns the number of bits you would need
 * to flip to get from one number to another.
 * @m: number of bits to flip
 * @n: number of flips
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int flip;
	unsigned long int num;

	flip = n ^ m;
	for (num = 0; flip > 0;)
	{
		if ((flip & 1) == 1)
			num++;
		flip = flip >> 1;
	}

	return (num);
}
