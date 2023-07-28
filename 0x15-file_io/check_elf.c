#include <elf_header.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check_elf - if the file a is an ELF file, it checks
 * @e_ident: pointer to array containing the ELF magic numbers
 *
 * Description: exit code 98 - If the file is not an ELF file
 */
void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
