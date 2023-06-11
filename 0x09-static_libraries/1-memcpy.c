#include "main.h"
/**
 *_memcpy - The function that copies memory area
 *@dest: The memory where is stored
 *@src: The memory where is copied
 *@n: A number of bytes
 *
 *Return: Memory copied with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;


	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
