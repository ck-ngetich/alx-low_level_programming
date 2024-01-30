#include "main.h"
/**
 * _isalpha - checks for alphabet characters
 * @c: character to be checked
 * Return: i if c is letter and 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
