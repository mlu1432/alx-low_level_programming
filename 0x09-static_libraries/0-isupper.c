#include "main.h"

/**
 * _isupper - Check character if is an uppercase letters
 * @c: char to check
 *
 * Return: 1 if character is an uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
