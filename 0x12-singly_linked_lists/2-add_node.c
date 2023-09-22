#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - adds a node to the begining of a linked list.
  * @head: ptr to the head of linked list.
  * @str: a string to fill new node with.
  * Return: a ptr to the new node.
  */

list_t	*add_node(list_t **head, const char *str)
{
	list_t		*node;
	unsigned int	len = 0;

	while (str[len])
		len++;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = len;
	node->next = (*head);
	(*head) = node;
	return (node);
}
