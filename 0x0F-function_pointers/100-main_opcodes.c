#include <stdio.h>
#include <stdlib.h>

/**
 * main - Opcodes of its main function are printed
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success), incorrect number of arguments: 1
 */
int main(int argc, char *argv[])
{
	int numbytes;
	int i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numbytes = atoi(argv[1]);

	if (numbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < numbytes; i++)
	{
		if (i == numbytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
