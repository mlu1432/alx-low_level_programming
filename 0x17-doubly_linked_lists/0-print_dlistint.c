#include "lists.h"

/**
 * print_dlistint - prints all the elements of
 * a doubly linked list
 *
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count;

	node_count = 0;

	if (h == NULL)
		return (node_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
