#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * @n: n bytes
 * Return: string value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y < x ; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
