#include "lists.h"

/**
 * add_nodeint - adds a node to the head of a list.
 * @head: ptr to the head of the list.
 * @n: data of new node.
 * Return: ptr to the new node.
*/

listint_t	*add_nodeint(listint_t **head, const int n)
{
	listint_t	*node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;

	(*head) = node;
	return (node);
}
