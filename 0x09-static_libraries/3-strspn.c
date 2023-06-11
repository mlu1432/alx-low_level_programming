#include "main.h"
/**
 * _strspn - Calculates the length of a prefix substring
 * @s: string to be searched
 * @accept: Characters to be matched in the string
 * Return: Only characters from 'accept' appear in the initial segment of 's'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int i;


	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
