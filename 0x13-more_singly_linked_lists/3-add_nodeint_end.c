#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a list.
 * @head: ptr to the head of the list.
 * @n: data of new node.
 * Return: ptr to the new node.
*/

listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*node;
	listint_t	*tmp;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!(*head))
		(*head) = node;
	else
	{
		tmp = (*head);
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = node;
	}

	return (node);
}
