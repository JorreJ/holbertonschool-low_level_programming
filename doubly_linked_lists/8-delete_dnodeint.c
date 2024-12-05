#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to delete, starting at 0
 *
 * Return: 1 (success), or -1 (fail)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr = *head;

	if (!curr)
		return (-1);
	if (index == 0)
	{
		*head = curr->next;
		if (!(*head))
			return (-1);
		curr->next->prev = NULL;
		free(curr);
	}
	else
	{
		while (i < index)
		{
			curr = curr->next;
			i++;
			if (!curr)
				return (-1);
		}
		curr->next->prev = curr->prev;
		curr->prev->next = curr->next;
		free(curr);
	}
	return (1);
}
