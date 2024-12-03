#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list
 * Return: number of elements print
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		s++;
		h = (*h).next;
	}
	return (s);
}
