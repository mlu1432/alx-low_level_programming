#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of command-line arguments
 * @argv: array of strings containing the arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
