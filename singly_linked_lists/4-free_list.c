#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
	while (head == NULL)
		return;
	free_list((*head).next);
	free((*head).str);
	free(head);
}
