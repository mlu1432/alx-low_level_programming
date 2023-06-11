#include "main.h"
/**
 * _strpbrk - An array of bytes is searched for in a string
 * @s: string to be searched
 * @accept: set of characters to search for
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}

return ('\0');
}
