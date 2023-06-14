#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - The program's arguments are concatenated
 * @ac: argument count
 * @av: argument vector
 * Return: The concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int j, x, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (x = 0; av[j][x]; x++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (x = 0; av[j][x]; x++)
	{
		str[r] = av[j][x];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
