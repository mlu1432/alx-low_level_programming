#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: string to duplicate
 * Return: Duplicate string, or NULL if memory is insufficient
 */
char *_strdup(char *str)
{
	char *duplicate;
	int j, k = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	duplicate = malloc(sizeof(char) * (j + 1));

	if (duplicate == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		duplicate[k] = str[k];

	return (duplicate);
}








