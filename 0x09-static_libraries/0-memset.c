#include "main.h"
/**
 * _memset -it fills a block memory with a specific value
 * @s: is the starting address of the memory
 * @b: is the desired value
 * @n: is the number of bytes to e changed
 * Return: a change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
