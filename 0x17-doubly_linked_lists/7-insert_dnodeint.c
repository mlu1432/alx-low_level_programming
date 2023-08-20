#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node with
 * a given value at a specific position
 *
 * @h: pointer to the first node of the list
 * @idx: position of the new node in the list
 * @n: data of the new node
 * Return: the pointer to the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *head;
	unsigned int index;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head = *h;
		index = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (index == idx)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;
			}
			head = head->next;
			index++;
		}
	}

	return (new_node);
}
