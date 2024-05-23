#include "search_algos.h"
#include <math.h>
#include <stdio.h>
#include <stddef.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int m, index, prev, step, i;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	prev = 0;
	index = 0;
	step = 0;

	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		prev = index;
		step += m;
		index = step;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (i = prev; i < (int)size && i <= index; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
