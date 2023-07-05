#include "lists.h"

/**
 * pop_listint - A linked list's head node is deleted
 * @head: The first element of the linked list
 *
 * Return: the head node's data (n), or 0 if the list is empty,
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}
