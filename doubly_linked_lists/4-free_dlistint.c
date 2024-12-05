#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the start of the list
 */

void free_dlistint(dlistint_t *head)
{
    while (head == NULL)
		return;
	free_dlistint((*head).next);
	free(head);
}
