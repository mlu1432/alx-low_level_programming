#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: Passed integers to the function.
 * @...: Printed numbers vary in number.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;


	va_start(nums, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));


		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");


	va_end(nums);
}
