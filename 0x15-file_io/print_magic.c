#include <elf_header.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_magic - Prints magic numbers of an ELF header
 * @e_ident: pointer to array containing the ELF magic numbers
 *
 * Description: magic numbers separated by the spaces
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf(" Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
