#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters
 * @c: The characters to be checked
 * Return: 1 for alphabetic characters and zero for anything else
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
