#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int my_file;
	int x, y;
	char *character;

	if (!filename)
		return (0);

	my_file = open(filename, O_RDONLY);
	if (my_file < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	x = read(my_file, buffer, letters);
	if (x < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[x] = '\0';

	close(my_file);

	y = write(STDOUT_FILENO, buffer, y);
	if (y < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (read_textfile);
}
