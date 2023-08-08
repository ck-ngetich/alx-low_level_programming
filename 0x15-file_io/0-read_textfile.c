#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t  my_file;
	ssize_t x, y;
	char *character;

	my_file = open(filename, O_RDONLY);
	if (my_file == -1)
		return (0);
	character = malloc(sizeof(char) * letters);
	x = write(STDOUT_FILENO, character, y);
	y = read(my_file, character, letters);

	free(character);
	close(my_file);
	return (y);
}
