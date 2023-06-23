#include <stdio.h>

/**
* main - causes an infinite loop
* @i: An integer to be tested
* Return: 0
*/
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;
/*
 * commenting out the infinite loop
 * i = 0;
 * while (i < 10)
 * {
 * putchar(i);
 * }
 */
printf("Infinite loop voided! \\o/\n");

return (0);
}
