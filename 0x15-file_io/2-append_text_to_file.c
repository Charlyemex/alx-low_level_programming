#include "main.h"
/**
 * append_text_to_file - It appends text at the end of a file
 * @filename: That's a pointer to the name of the file.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: -1 if either the function fails or filename is NULL
 * If the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open, write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	open = open(filename, O_WRONLY | O_APPEND);
	write = write(open, text_content, len);

	if (open == -1 || write == -1)
		return (-1);

	close(open);

	return (1);
}
