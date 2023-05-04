#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - all elements of a linked list will be printed
 * @h: linked list of type listint_t to be printed
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t z = 0;

	while (h)
	{
		printf("%d\n", h->n);
		z++;
		h = h->next;
	}

	return (z);
}
