#include "main.h"

/**
 * set_bit - A bit at a given index is set to 1
 * @n: To change, point to the number
 * @index: index of the bit to set to 1
 *
 * Return: (1) for success, (-1) for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
