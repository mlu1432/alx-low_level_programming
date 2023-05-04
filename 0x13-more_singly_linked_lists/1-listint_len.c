#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - an int_t that returns the number of elements in a linked list
 * @h: linking list head pointer
 *
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t box = 0;

	while (h != NULL)
	{
		box++;
		h = h->next;
	}

	return (box);
}
