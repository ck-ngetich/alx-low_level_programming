#include <stdio.h>
/**
 * swap_int - Swap the value of two integers
 * @x: The first integer to be swapped
 * @y: The second integer to be swapped
 * Return: Nothing!
 */
void swap_int(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}
