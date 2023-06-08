#include "main.h"

/**
 * _pow_recursion - Function returns the result of raising x to the power of y
 * @x: The value to raise
 * @y: power
 *
 * Return: The result of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
