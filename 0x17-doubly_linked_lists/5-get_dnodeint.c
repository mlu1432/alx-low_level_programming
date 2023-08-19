#include "lists.h"

/**
 * get_dnodeint_at_index - A dlistint_t linked list's nth node is returned.
 * @head: the pointer to head of the list
 * @index: Starting from 0, the index of the node to search for
 * Return: nothing node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index;
	dlistint_t *temp;

	current_index = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == current_index)
	return (temp);
	current_index++;
	temp = temp->next;
	}
	return (NULL);
}
