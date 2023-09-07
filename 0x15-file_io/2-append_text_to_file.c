#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}
	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, size);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
