#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */
void rev_string(char *s)
{
	int len, x, y;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
		x = 0;
	y = len / 2;
	while (y--)
	{
	tmp = s[len - x - 1];
	s[len - x - 1] = s[x];
	s[x] = tmp;
	x++;
	}
}
