#include "main.h"

/**
 * _strlen_recursion - Will return the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length_ = 0;

	if (*s)
	{
		length_++;
		length_ += _strlen_recursion(s + 1);
	}

	return (length_);
}
