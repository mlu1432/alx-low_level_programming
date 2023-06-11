#include "main.h"
/**
 * _memset - Fill a specific block of memory
 * @s: The starting address of memory to be filled
 * @b: The desired value
 * @n: The number of bytes to be changed
 *
 * Return: Array with new n-byte value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;


	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
