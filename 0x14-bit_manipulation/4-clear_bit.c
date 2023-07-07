#include "main.h"

/**
 * clear_bit - A bit's value is set to 0
 * @n: the pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: -1 for failure, 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
