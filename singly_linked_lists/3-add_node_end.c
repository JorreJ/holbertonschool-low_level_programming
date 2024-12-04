#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the list
 *
 * Return: address of the new element (Success), or NULL (Fail)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;
	list_t *last = (*head);

	while (str[len] != '\0')
		len++;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	(*node).str = strdup(str);
	(*node).len = len;
	(*node).next = NULL;
	if ((*head) == NULL)
		(*head) = node;
	else
	{
		while ((*last).next != NULL)
			last = (*last).next;
		(*last).next = node;
	}
	return (*head);
}
