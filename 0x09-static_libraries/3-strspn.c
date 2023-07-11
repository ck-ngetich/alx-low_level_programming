#include "main.h"
/**
 * _strspn - this is the entry point
 * @s: value to input
 * @accept: value to input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				i++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
