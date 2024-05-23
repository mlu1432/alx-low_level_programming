#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_array - Prints the current subarray being searched
 * @array: The array to print from
 * @left: The left index of the subarray
 * @right: The right index of the subarray
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i > left)
		printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * recursive_binary - Recursively searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @left: The left index of the subarray to search in
 * @right: The right index of the subarray to search in
 * @value: The value to search for
 * Return: The index where value is located, or -1 if not found
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			else
				return (recursive_binary(array, left, mid, value));
		}
		if (array[mid] < value)
			return (recursive_binary(array, mid + 1, right, value));
		else
			return (recursive_binary(array, left, mid - 1, value));
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}
