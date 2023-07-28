#include "elf_header.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_entry - Prints an entry point of the ELF header
 * @e_entry: an address of an ELF entry point
 * @e_ident: A pointer to an array containing the ELF class
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
