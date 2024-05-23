#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
#include <math.h>

/**
 * binary_search_helper - Searches for a value in a sorted array of integers using binary search within a range.
 * @array: Pointer to the first element of the array to search in.
 * @left: Left index of the range to search within.
 * @right: Right index of the range to search within.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int binary_search_helper(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
	{
		if (i != left)
		printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");

	mid = left + (right - left) / 2;
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers using exponential search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left, right;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

 	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = bound < size ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return binary_search_helper(array, left, right, value);
}
