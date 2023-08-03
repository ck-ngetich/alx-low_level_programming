#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks if the system is big endian or little endian
 * Return: 0 if big endian, 1 if little endian
 **/
int get_endianness(void)
{
	int val;
	char *adns;

	val = 2;
	adns = (char *)&val;
	if (*adns)
		return (1);
	return (0);
}
