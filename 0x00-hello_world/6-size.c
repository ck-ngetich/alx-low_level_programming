#include <stdio.h>
/*
 * main - Entry point
 * Description: C program that prints various types in a computer
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	long int l;
	long long int j;
	char c;
	float f;
	printf("Size of a char: %d bytes(s)\n", (sizeof((char))));
	printf("Size of an int: %d bytes(s)\n", (sizeof((int))));
	printf("Size of a long int: %d bytes(s)\n", (sizeof((long int))));
	printf("Size of a long long int: %d bytes(s)\n", (sizeof((long long int))));
	printf("Size of a float: %d bytes(s)\n", (sizeof((float))));
	return (0);
}

