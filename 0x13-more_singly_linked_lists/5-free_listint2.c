#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: Listint_t pointer to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		*head = temp;
		temp = (*head)->next;
		free(*head);
	}

	*head = NULL;
}
