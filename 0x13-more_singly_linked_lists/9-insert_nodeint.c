#include "lists.h"

/**
 * insert_nodeint_at_index - Adds a new node to a linked list
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: The index of the new node
 * @n: Node data to be inserted
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (num = 0; temp && num < idx; num++)
	{
		if (num == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
