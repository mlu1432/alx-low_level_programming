#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: Concatenation of the maximum number of bytes
 *
 * Return: String containing the result
 */
char *_strncat(char *dest, char *src, int n)
{
	int r, j;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[r] = src[j];
	r++;
	j++;
	}
	dest[r] = '\0';
	return (dest);
}
