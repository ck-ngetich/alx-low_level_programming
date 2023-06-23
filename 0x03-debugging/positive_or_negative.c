#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 * @i: The number to be returned
 * Return: 1 for positive num, -1 for a negative num and 0 for anything else
 */
void positive_or_negative(int i)

{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
	printf("%d is negative\n", i);
else
	printf("%d is zero\n", i);
}
