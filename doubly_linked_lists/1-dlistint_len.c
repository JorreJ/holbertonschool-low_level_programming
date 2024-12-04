#include "lists.h"

/**
 * dlistint_len - count the number of node in a dlistint_t list
 * @h: pointer to the head of the dlistint_t list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t non = 0;

	while (h)
	{
		non++;
		h = h->next;
	}
	return (non);
}
