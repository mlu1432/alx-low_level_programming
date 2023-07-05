#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t list
 * @head: first node in the linked list
 *
 * Return: If the list is empty, the sum is 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
