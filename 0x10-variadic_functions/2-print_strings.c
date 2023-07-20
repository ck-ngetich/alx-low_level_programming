#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a program to prints strings
 * @separator:string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: Avariable number of strings to be printed
 * Return: nil if separator if NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list g;
	char *str;
	unsigned int x;

	va_start(g, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(g, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(g);
}
