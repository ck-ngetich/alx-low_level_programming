#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
char *create_buffer(char *file);
void close_file(int func);
/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: The name of the file buffer is storing chars for
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}
/**
 * close_file - Closes file descriptors
 * @fd: The file descriptors to be closed
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copy the content
 * @argc: the number of argument supplied
 * @argv: array of pointer to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int start, end, x, y;
	char *strg;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	strg = create_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	x = read(start, strg, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (start == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(strg);
			exit(98);
		}
		y = write(end, strg, x);
		if (end == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(strg);
			exit(99);
		}

		x = read(start, strg, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);

	free(strg);
	close_file(start);
	close_file(end);

	return (0);
}
