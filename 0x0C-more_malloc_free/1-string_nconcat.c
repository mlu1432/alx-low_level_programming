#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: first string
 * @s2: second string
 * @n: Concatenation of bytes from s2 to s1
 *
 * Return: the resulting string as a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int r = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (r < len1)
	{
		s[r] = s1[r];
		r++;
	}

	while (n < len2 && r < (len1 + n))
		s[r++] = s2[j++];

	while (n >= len2 && r < (len1 + len2))
		s[r++] = s2[j++];

	s[r] = '\0';

	return (s);
}
