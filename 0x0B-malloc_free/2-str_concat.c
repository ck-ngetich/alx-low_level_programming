#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first strings to concatenates
 * @s2: the second strings to concatenates
 * Return: both concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, m = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
		x++;
	while (s2[y])
		y++;
	m = x + y;
	c = malloc((sizeof(char) * m) + 1);

	if (c == NULL)
		return (NULL);
	y = 0;

	while (z < m)
	{
		if (z <= x)
			c[z] = s1[z];
		if (z >= x)
		{
			c[z] = s2[y];
			y++;
		}
		z++;
	}
	c[z] = '\0';
	return (c);
}
