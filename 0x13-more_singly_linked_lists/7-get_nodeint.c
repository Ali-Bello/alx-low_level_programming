#include "lists.h"

/**
 * get_nodeint_at_index - gets a ptr to the node at given index.
 * @head: ptr to a list.
 * @index: the given index.
 * Return: ptr to the node at index position.
*/

listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int	i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head : NULL);
}
