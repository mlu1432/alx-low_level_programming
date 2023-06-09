#include "main.h"

int check_pal(char *s, int start, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Checks if a string is a palindrome recursively
 * @s: string to check
 * @start: Starting index
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int check_pal(char *s, int start, int len)
{
	if (*(s + start) != *(s + len - 1))
		return (0);
	if (start >= len)
		return (1);
	return (check_pal(s, start + 1, len - 1));
}
