#include <stdio.h>
/**
 * main - Prints the sum of fibonacci even numbers
 * less that 4000000.
 * Return: Nothing!
 */
int main(void)
{
int i;
long int j = 1, k = 2,  n, sum = 0;

for (i = 1; i <= 33; i++)
{
if (j < 4000000 && (j % 2) == 0)
{
	sum = sum + j;
}
n = j + k;
j = k;
k = n;
}
printf("%ld\n", sum);
return (0);
}
