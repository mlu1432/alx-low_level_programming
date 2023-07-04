#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a linked list
 * @head: List element pointer
 * @n: data to insert in the new element
 *
 * Return: NULL if the node does not exist
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
