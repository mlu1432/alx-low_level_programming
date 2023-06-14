#include <stdlib.h>
#include "main.h"
/**
 * count_word - count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int num, c, b;

	num = 0;
	b = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			num = 0;
		else if (num == 0)
		{
			num = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - splits a string into words
 * @str: Input string
 *
 * Return: An array of strings (words),
 * or NULL if it fails
*/
char **strtow(char *str)
{
	char **words, *tmp;
	int n, k = 0, len = 0, matrix, c = 0, start, end;

	while (*(str + len))
		len++;
	matrix = count_word(str);
	if (matrix == 0)
		return (NULL);

	words = (char **) malloc(sizeof(char *) * (matrix + 1));
	if (words == NULL)
		return (NULL);

	for (n = 0; n <= len; n++)
	{
		if (str[n] == ' ' || str[n] == '\0')
		{
			if (c)
			{
				end = n;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				return (NULL);
				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				words[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = n;
	}

	words[k] = NULL;

	return (words);
}
