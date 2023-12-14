#include "search_algos.h"

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
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
