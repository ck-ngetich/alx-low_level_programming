#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n:  number of bytes to be concatenated
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, z = 0, m = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
		x++;
	while (s2[z])
		z++;
	if (n >= z)
		m = x + z;
	else
		m = x + n;
	c = malloc(sizeof(char) * m + 1);
	if (c == NULL)
	return (NULL);

	z = 0;
	while (y < m)
	{
		if (y <= x)
			c[y] = s1[y];
		if (y >= x)
		{
			c[y] = s2[z];
			z++;
		}
		y++;
	}
	c[y] = '\0';
	return (c);
}
