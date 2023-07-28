#include "elf_header.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_version - Prints version of the ELF header
 * @e_ident: pointer to array containing the ELF version
 */
void print_version(unsigned char *e_ident)
{
	 printf(" Version: %d",
			  e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
