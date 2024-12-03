#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: adress of the new element (Success), or NULL (Fail)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	(*node).str = strdup(str);
	(*node).len = len;
	(*node).next = (*head);
	(*head) = node;
	return (*head);
}
