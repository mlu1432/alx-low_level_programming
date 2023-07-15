#include "main.h"

/**
 * append_text_to_file - Adds text to the end of a file.
 * @filename: The pointer to the name of the file.
 * @text_content: a string to add to the end of the file.
 *
 * Return: -1 if the function fails or the filename is NULL.
 *         the user lacks write permissions if the file does not exist - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int write_count, len = 0;
	int o;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	write_count = write(o, text_content, len);

	if (o == -1 || write_count == -1)
		return (-1);

	close(o);

	return (1);
}
