#include "main.h"
 /**
 * _strcat - Concatenates two strings.
 * @dest: Destination string
 * @src: source string
 *
 * Return: String pointer to the result
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] = '\0';
	return (dest);
}
