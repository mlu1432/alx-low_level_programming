#include "main.h"

/**
 * get_endianness - Determines whether a machine is little
 * or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int index = 1;
	char *c = (char *) &index;

	return (*c);
}
