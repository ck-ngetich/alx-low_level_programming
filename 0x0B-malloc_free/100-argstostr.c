#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - converts params to strings
 * @ac: the argument count
 * @av: the argument vector
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, d;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (b < ac)
	{
		while (av[b][c])
		{
			a++;
			c++;
		}
		b = 0;
		a++;
	}

	s = malloc((sizeof(char) * a) + ac + 1);
	b = 0;
	while (av[b])
	{
		while (av[b][c])
		{
			s[d] = av[b][c];
			d++;
			c++;
		}
		s[d] = '\n';

		c = 0;
		d++;
		b++;
	}
	d++;
	s[d] = '\0';
	return (s);
}

