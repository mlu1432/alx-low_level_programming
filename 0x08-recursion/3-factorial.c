#include "main.h"

/**
 * factorial -The factorial of a number is returned .
 * @n: Factorial number to return
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
