#include "main.h"

/**
 * get_bit - It returns the decimal value of a bit at an index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: Bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
