#include "main.h"

/**
 * flip_bits - Counts the number of bits in the change
 * From one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return:  the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, num = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		current = exclusive >> index;
		if (current & 1)
			num++;
	}

	return (num);
}
