#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Each array element is printed on a new line
 * @array: array
 * @size: how many elem to print
 * @action: Regular or hexadecimal pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
