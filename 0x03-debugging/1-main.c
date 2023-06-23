#include <stdio.h>

/**
* main - causes an infinite loop
* @i: An integer to be tested
* @\\o/: This is the figure to print
* Return: 0
*/

int main(void)
{
int i;
printf("Infinite loop incoming :(\n", i);

i = 0;
/**
 * while (i < 10): No loop required
 * {
 * putchar(i);
 * }: End ofnon-required loop
 */
printf("Infinite loop voided! \\o/\n");

return (0);
}
