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
	unsigned int i;
	dlistint_t *node, *curr;

	node = NULL;
	if (idx == 0)
		node = add_dnodeint(h, n);
	else
	{
		curr = *h;
		i = 1;
		while (curr)
		{
			if (i == idx)
			{
				if (!curr->next)
					node = add_dnodeint_end(h, n);
				else
				{
					node = malloc(sizeof(dlistint_t));
					if (node)
					{
						node->n = n;
						node->next = curr->next;
						node->prev = curr;
						curr->next->prev = node;
						curr->next = node;
					}
				}
				break;
			}
			curr = curr->next;
			i++;
		}
	}
	return (node);
}
