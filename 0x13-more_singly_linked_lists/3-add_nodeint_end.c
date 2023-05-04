#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if the node does not exit
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_to_add;
	listint_t *current = *head;

	node_to_add = malloc(sizeof(listint_t));
	if (!node_to_add)
		return (NULL);

	node_to_add->n = n;
	node_to_add->next = NULL;

	if (*head == NULL)
	{
		*head = node_to_add;
		return (node_to_add);
	}

	while (current->next)
		current = current->next;

	current->next = node_to_add;

	return (node_to_add);
}
