#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - finds a value in an array of
 * integers by checking each element one by one
 * @array:  the number of elements in the array
 * @size:  the number of elements in the array
 * @value: the value to look for
 * Return: the index of the value if found, or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
