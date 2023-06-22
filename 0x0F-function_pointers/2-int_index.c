#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - return index place if comparison = true, else -1
 * @array: An array pointer
 * @size: size of elements in array
 * @cmp: The pointer to a function that compares values
 * Return: Cmp function does not return 0 for the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}