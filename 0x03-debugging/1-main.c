#include <stdio.h>

/**
* main - causes an infinite loop
* @x: An integer to be tested
* @\\o/: This is the figure to print
* Return: 0
*/
int main(void)
{
int x;
printf("Infinite loop incoming :(\n");

x = 0;
/*
 * while (x < 10): No loop required
 * {
 * putchar(x);
 * }: End ofnon-required loop
 */
printf("Infinite loop voided! \\o/\n");

return (0);
}
