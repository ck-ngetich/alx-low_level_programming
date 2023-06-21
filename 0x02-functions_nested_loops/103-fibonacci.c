#include <stdio.h>
/**
 * main - Prints the sum of fibonacci even numbers
 * less that 4000000.
 * Return: Nothing!
 */
int main(void)
{
int i = 0;
long j, k = 1, sum = i;

while (k + j < 4000000)
{
k += sum;
if (k % 2 == 0)
sum += k;
j = k + j;
k = j;
++i;
}
printf("%ld\n", sum);
return (0);
}
