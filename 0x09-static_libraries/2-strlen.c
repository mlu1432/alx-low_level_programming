#include "main.h"
/**
 * _strlen - The length of a string is returned
 * @s: The string
 * Return: length of the starting
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
