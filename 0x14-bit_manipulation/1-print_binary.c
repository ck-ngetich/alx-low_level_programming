#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: size of the binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
char x;

if (n == 0)
{
putchar('0');
return;
}
if (n == 1)
{
putchar('1');
return;
}
print_binary(n >> 1);
x = (n & 1) ? '1' : '0';
putchar(x);
}
