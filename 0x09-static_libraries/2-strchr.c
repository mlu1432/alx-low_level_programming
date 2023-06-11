#include "main.h"
/**
 * _strchr - Finds the first instance of a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: In case the character is not found, NULL is returned
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
