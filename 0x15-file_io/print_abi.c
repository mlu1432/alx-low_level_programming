#include <elf_header.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_abi - Prints an ABI version of the ELF header
 * @e_ident: pointer to array containing the ELF ABI version
 */
void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
		e_ident[EI_ABIVERSION]);
}
