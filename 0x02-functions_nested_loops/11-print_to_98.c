#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line.
 * @n: The number to start counting from.
 * Return: Always 0.
 */
void print_to_98(int n)
{

    if (n <= 98)
    {
    for (i = n; i < 98; i++)
    {
    _putchar(i / 10 + '0');
    _putchar(i % 10 + '0');
    _putchar(',');
    _putchar(' ');
    }
    }
    else
    {
    for (i = n; i > 98; i--)
    {
    _putchar(i / 10 + '0');
    _putchar(i % 10 + '0');
    _putchar(',');
    _putchar(' ');
    }
    }

    _putchar('9');
    _putchar('8');
    _putchar('\n');
}
