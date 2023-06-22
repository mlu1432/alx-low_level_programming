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
	int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
