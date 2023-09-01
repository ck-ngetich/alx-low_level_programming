#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - a fuction to converts binary to int
 * @b: is the pointing character string of the binary
 * Return: converted number or 0 otherwise.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number, power;
	int value;

	if (b == NULL)
		return (0);

	for (value = 0; b[value]; value++)
	{
		if (b[value] != '0' && b[value] != '1')
			return (0);
	}

	for (power = 1, number = 0, value--; value >= 0; value--, power *= 2)
	{
		if (b[value] == '1')
			number += power;
	}

	return (number);
}
