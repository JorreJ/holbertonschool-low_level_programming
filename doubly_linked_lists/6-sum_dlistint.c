#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t list
 * @head: pointer to the start of the list
 *
 * Return: sum of all int in the dlistint_t list
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *curr = head;

	while (curr->next)
	{
		i += curr->n;
		curr = curr->next;
		if (!curr->next)
		{
			i += curr->n;
			return (i);
		}
	}
	return (0);
}
