#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n);
	return (0);
}


