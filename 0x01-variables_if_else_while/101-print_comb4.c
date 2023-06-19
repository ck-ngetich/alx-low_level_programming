#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
int d, p, q;
for (d = 48; d < 58; d++)
{
for (p = 49; p < 58; p++)
{
for (q = 50; q < 58; q++)
if (q > p && p > d)
{
putchar(d);
putchar(p);
putchar(q);
if (d != 55 || p != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
