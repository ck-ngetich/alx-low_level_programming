#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints it own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < bytes; x++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (x == bytes - 1)
			continue;
			printf(" ");
			address++;
	}
	printf("\n");
	return (0);
}
