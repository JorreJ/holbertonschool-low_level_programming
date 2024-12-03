#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in the list_t list
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		h = (*h).next;
		n++;
	}
	return (n);
}
