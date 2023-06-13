#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to be converted
 *
 * Return: int converted from the string
 */
int _atoi(char *s)
{
	int j, d, n, length, f, digit_value;

	j = 0;
	d = 0;
	n = 0;
	length = 0;
	f = 0;
	digit_value = 0;

	while (s[length] != '\0')
		length++;

	while (j < length && f == 0)
	{
		if (s[j] == '-')
			++d;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit_value = s[j] - '0';
			if (d % 2)
				digit_value = -digit_value;
			n = n * 10 + digit_value;
			f = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			f = 0;
		}
		j++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
