#include "main.h"

/**
 * create_file: Creates a file.
 * @filename: To create a file, pass a pointer to its name.
 * @text_content: To write to the file, point to a string.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_count, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_count = write(fd, text_content, len);

	if (fd == -1 || write_coung == -1)
		return (-1);

	close(fd);

	return (1);
}