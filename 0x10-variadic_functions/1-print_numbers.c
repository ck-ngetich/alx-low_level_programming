#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - programs that prints numbers
 * @separator: a string to be printed between numbers
 * @n: the number of integer passed in the functon
 * @...: a variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int x;

	va_start(nums, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(nums, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
