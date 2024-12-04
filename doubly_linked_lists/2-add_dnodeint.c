#include "lists.h"

/**
 * add_dnodeint - adds a node at the head of the dlistint_t list
 * @head: head of the dlistint_t list
 * @n: int to add to the dlistint_t list
 *
 * Return: adress of the new element (success), or NULL (fail)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *h;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	h = *head;
	node->n = n;
	node->prev = NULL;
	node->next = (*head);
	if (h)
		h->prev = node;
	(*head) = node;
	return (*head);
}
