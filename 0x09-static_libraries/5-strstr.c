#include "main.h"
/**
 * _strstr - Entry point of the program
 * @haystack: value to input
 * @needle: value to input
 * Return: Always 0 (sucess)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (0);
}
