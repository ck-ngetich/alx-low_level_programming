#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
long int l;
long long int j;
char c;
float f;

printf("Size of a char: %d byte(s)\n", (sizeof(char)));
printf("Size of an int: %d byte(s)\n", (sizeof(int)));
printf("Size of a long int: %d byte(s)\n", (sizeof(long int)));
printf("Size of a long long int: %d byte(s)\n", (sizeof(long long int)));
printf("Size of a float: %d byte(s)\n", (sizeof(float)));
return (0);
}

