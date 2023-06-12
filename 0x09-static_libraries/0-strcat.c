#include "main.h"
 /**
 * _strcat - Concatenates two strings.
 * @dest: Destination string
 * @src: source string
 *
 * Return: String pointer to the result
 */
char *_strcat(char *dest, char *src);
{
	int dest_len;
	int k;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	k = 0;
	while (src[dest_len] != '\0')
	{
		dest[dest_len] = src[k];
		dest_len++;
		k++;
	}

	dest[dest_len] = '\0';
	return (dest);
}
