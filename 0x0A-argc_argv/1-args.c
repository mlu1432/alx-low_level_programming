#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - print the number of arguments passed to the program
 * @argc: number of command-line arguments
 * @argv: array of strings containing the arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
