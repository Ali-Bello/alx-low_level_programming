#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node_end - adds a node to the end of a linked list.
  * @head: a ptr to the head of the list.
  * @str: a string to fill the new node with.
  * Return: a ptr to the new node.
  */

list_t	*add_node_end(list_t **head, const char *str)
{
	list_t		*tmp;
	list_t		*node;
	unsigned int	i;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	i = 0;
	while (str[i])
		i++;

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (!(*head))
		*head = node;

	else
	{
		tmp = (*head);
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = node;
	}
	return (node);
}
