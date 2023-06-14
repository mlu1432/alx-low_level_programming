#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - two strings are concatenated
 * @s1: first string
 * @s2: second string
 * Return: Concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int j, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = ci = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[ci] != '\0')
		ci++;
	concat = malloc(sizeof(char) * (j + ci + 1));

	if (concat == NULL)
		return (NULL);
	j = ci = 0;
	while (s1[j] != '\0')
	{
		concat[j] = s1[j];
		j++;
	}

	while (s2[ci] != '\0')
	{
		concat[j] = s2[ci];
		j++, ci++;
	}
	concat[j] = '\0';
	return (concat);
}
