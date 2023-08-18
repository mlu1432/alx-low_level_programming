#include "lists.h"

/**
 * dlistint_len - returns the number of nodes
 * in a doubly linked list
 *
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node_count;

	node_count = 0;

	if (h == NULL)
		return (node_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
