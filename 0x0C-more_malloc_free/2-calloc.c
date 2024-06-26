#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: A pointer to a memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		s[r] = b;
	}

	return (s);
}

/**
 * *_calloc - the allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
