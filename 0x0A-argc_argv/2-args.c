#include "main.h"
#include <stdio.h>
/**
 * main - prints all the args content
 * @argc: argument count
 * @argv: aurgument vector
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
