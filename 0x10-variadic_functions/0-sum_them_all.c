#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_the_all - Return the sum of all its parameter
 * @n: the number of parameter passed to the function
 * @...: varible number of parameter to calculate the sum of .
 * Return: if n == 0 - 0,otherwise the sum of all parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, n);
	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
