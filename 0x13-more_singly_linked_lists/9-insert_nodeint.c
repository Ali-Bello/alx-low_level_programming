#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given index.
 * @head: ptr to a list.
 * @idx: the given index.
 * @n: new node's data.
 * Return: ptr to the new node.
*/

listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int		i = 0;
	listint_t		*node;
	listint_t		*tmp = *head;

	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	node = malloc(sizeof(listint_t));
	if (!node || !tmp)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = tmp->next;
	tmp->next = node;

	return (node);
}
