#include "main.h"

/**
 * _puts_recursion - Puts() function;
 * @s: Input
 * Return: The result is always 0 (Success)n:
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
