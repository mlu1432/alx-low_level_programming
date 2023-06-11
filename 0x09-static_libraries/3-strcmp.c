#include "main.h"
/**
 * _strcmp - Compare string values
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: If the strings are equal, the difference between their ASCII values
 */
int _strcmp(char *s1, char *s2)
{
	int j;


	j = 0;
	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
	j++;
	}
	return (0);
}
