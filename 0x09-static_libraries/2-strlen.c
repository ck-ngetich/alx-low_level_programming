#include "main.h"
/**
 * _strlen _ to return the length of a string
 * @s: is the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	return (j);
}
