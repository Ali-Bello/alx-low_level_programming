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
	listint_t	*tmp;
	listint_t	*node = NULL;
	unsigned int	i = 0;

	if (*head)
	{
		tmp = (*head);
		while (tmp && i < idx - 1)
		{
			tmp = tmp->next;
			i++;
		}

		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);

		node->n = n;
		node->next = tmp->next;

		tmp->next = node;
	}

	return (node);
}
