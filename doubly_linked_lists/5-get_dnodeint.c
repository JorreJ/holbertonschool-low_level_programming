#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t list
 * @head: pointer to the start of the dlistint_t list
 * @index: index of the node, starting from 0
 *
 * Return: adress of the nth node (success), or NULL (fail)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr = head;

	if (curr)
	{
		while (i < index)
		{
			curr = curr->next;
			i++;
			if (curr == NULL)
				return (NULL);
		}
		return (curr);
	}
	return (NULL);
}
