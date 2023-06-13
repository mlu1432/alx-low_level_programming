#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Calculates how many coins are needed to
 * compensate for an amount of money
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, j, coins_result;
	int coins_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	coins_result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins_values[j])
		{
			coins_result++;
			num -= coins_values[j];
		}
	}

	printf("%d\n", coins_result);
	return (0);
}
