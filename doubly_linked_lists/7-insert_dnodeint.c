#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where to add the new node
 * @n: int to add to the list
 *
 * Return: address of the new node (succes), or NULL (fail)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *curr = *h, *node, *temp;

	node = NULL;
	if (!curr)
		return (NULL);
	if (curr)
	{
		if (idx == 0)
			node = add_dnodeint(h, n);
		while (i < idx - 1)
		{
			curr = curr->next;
			i++;
			if (!curr)
				return (NULL);
		}
		node = malloc(sizeof(dlistint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->prev = curr;
		temp = curr->next;
		curr->next = node;
		node->next = temp;
		curr = node->next;
		if (!curr)
		{
			free(node);
			return (NULL);
		}
		curr->prev = node;
		return (node);
	}
	return (NULL);
}
