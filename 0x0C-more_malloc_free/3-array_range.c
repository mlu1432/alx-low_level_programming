#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values and number of elements
 *
 * Return: The newly created array's pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int r, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (r = 0; min <= max; r++)
		arr[r] = min++;

	return (arr);
}
