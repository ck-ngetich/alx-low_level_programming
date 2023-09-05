#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int func, i, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	func = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(func, text_content, length);
	if (func == -1 || i == -1)
		return (-1);
	close(func);
	return (1);
}
