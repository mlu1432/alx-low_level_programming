#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text file and print it to STDOUT.
 * @filename: The text file is being read
 * @letters: The number of letters to be read
 * Return: The actual number of bytes read is w and printed
 *        Failed functions or NULL filenames result in 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t write_count;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	write_count = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (write_count);
}
