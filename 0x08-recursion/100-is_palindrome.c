#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string
 * @s: string to check
 * @n1: smallest iterartor
 * @n2: biggest iterator
 * Return: .
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) != *(s + n2 - 1))
		return (0);
	if  (n1 >= n2)
		return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
}
/**
 * is_palidrome - detects is a string is a palidrome
 * @s: string to reverse
 * Return: 1 if s is a palidrome , 0 if not.
 */
int is_palidrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s)));
}
