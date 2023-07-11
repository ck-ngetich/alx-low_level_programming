#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory where is stored
 * @src: memory whre is copied
 * @n:L number of bytes
 * Return: copied memory with changed bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
