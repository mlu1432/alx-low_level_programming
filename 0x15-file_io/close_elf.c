#include "elf_header.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * close_elf - the closes an ELF file
 * @elf: file descriptor of an ELF file
 *
 * Description: exit code 98 - f the file cannot be closed
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
