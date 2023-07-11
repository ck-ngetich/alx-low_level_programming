#include "main.h"
/**
 * _isupper - Checks if letters are uppercase
 * @c: is the character to check
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
