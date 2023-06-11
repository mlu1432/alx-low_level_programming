#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Character to be checked
 * Return: If c is a letter, 1; otherwise, 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
