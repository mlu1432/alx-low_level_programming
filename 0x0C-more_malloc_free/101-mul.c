#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - Tests if a string contains a non-digit character
 * @s: Analyze the string
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * _strlen - The length of a string is returned
 * @s: Analyze the string
 *
 * Return:length of the string
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: (Success) = 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, total_len, j, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total_len = len1 + len2 + 1;
	result = malloc(sizeof(int) * total_len);
	if (!result)
		return (1);
	for (j = 0; j <= len1 + len2; j++)
		result[j] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (j = 0; j < total_len - 1; j++)
	{
		if (result[j])
			a = 1;
		if (a)
			_putchar(result[j] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
