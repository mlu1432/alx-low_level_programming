#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function calculates the sum of its parameters
 * @n: The number of paramters passed
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: A sum of all parameters, or 0 if n equals 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int j;
	int sum = 0;


	va_start(arg, n);


	for (j = 0; j < n; j++)
		sum += va_arg(arg, int);


	va_end(arg);


	return (sum);
}
