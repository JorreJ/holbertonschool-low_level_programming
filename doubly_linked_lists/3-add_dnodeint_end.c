#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the start of the list
 * @n: int to add to the list
 *
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *last = (*head);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if ((*head) == NULL)
		(*head) = node;
	else
	{
		while ((*last).next != NULL)
			last = last->next;
		last->next = node;
	}
	node->prev = last;
	return (node);
}
