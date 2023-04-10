#include "main.h"
/**
 * create_file - creates a file with a given name and writes a string to it
 * @filename: the name of the file to create
 * @text_content: the string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_count;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (*(text_content + len))
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		write_count = write(fd, text_content, len);
		if (write_count == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
