#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of the list
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;


	while (head != NULL)
	{
	current = current->next;
	free(current->prev);
	}
	free(current);
}
