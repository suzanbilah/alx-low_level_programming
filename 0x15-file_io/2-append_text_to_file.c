#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: The string to add to the end of the file
 * Return: if the function fails or or filename is NULL - -1
 * if the file does not exist the user lacks write permissions - -1
 * otherwise 0 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len];)
			len++;

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	if (write(o, text_content, len) == -1)
	{
		close(o);
		return (-1);
	}

	close(o);

	return (1);
}
