#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness - checks if the system is big endian or little endian
 * Return: 0 if big endian, 1 if little endian
 **/
int get_endianness(void)
{
	int value;
	char *address;

	value = 2;
	address = (char *)&value;
	if (*address)
		return (1);
	else
		return (0);
}
